#include <fstream>
#include <string>
#include <vector>
#include "tensorflow/lite/interpreter.h"
#include "tensorflow/lite/kernels/register.h"
#include "tensorflow/lite/string_util.h"
#include "tensorflow/lite/model.h"
#include "loadingData.h"
#include <chrono> 

data_loader *my_data;
float *ecg_sig;
std::vector<long unsigned int> data_size;
size_t size_shape;
int batchsize=10000;
int8_t* output_data;
float* input_data;

int main(int argc, char **argv)
{

    // Get Model label and input image
    if (argc != 2)
    {
        fprintf(stderr, "TfliteClassification.exe modelfile\n");
        // fprintf(stderr, "%s\n",&argv);
        exit(-1);
    }
    const char *modelFileName = argv[1];
    my_data = new data_loader("/media/huucuong/Windows-SSD/cpp/assets/data/data_100.npz");
    ecg_sig= my_data->signal_vector_data();

    // if input_details[0]['dtype'] == np.int8:
    //     input_scale, input_zero_point = input_details[0]["quantization"]
    //     data = data / input_scale + input_zero_point

    data_size=my_data->num_samples;
    size_shape=batchsize*data_size[1]*data_size[2];
    const int win_samp=data_size[1];
    float input_scale=0.006381112150847912;
    int input_zero_point=-30;

    input_data = (float *)malloc(size_shape*sizeof(*ecg_sig));
    output_data = (int8_t *)malloc(size_shape*sizeof(int8_t));    

    memcpy(input_data, ecg_sig,size_shape*sizeof(*ecg_sig));

    for (int i=0;i<size_shape;i++){
        output_data[i]= (int8_t)(input_data[i] / input_scale + input_zero_point);
        // std::cout<<output_data[i]+0<<std::endl;
    } 


    // quantize(ecg_sig,output_data,batchsize*win_samp,0.006381112150847912,-30)
    // Load Model
    std::unique_ptr<tflite::FlatBufferModel> model = tflite::FlatBufferModel::BuildFromFile(modelFileName);
    if (model == nullptr)
    {
        fprintf(stderr, "failed to load model\n");
        exit(-1);
    }
    // Initiate Interpreter
    
    std::unique_ptr<tflite::Interpreter> interpreter;
    tflite::ops::builtin::BuiltinOpResolver resolver;
    tflite::InterpreterBuilder(*model.get(), resolver)(&interpreter);
    if (interpreter == nullptr)
    {
        fprintf(stderr, "Failed to initiate the interpreter\n");
        exit(-1);
    }

    interpreter->ResizeInputTensor(/*tensor_index=*/0, std::vector<int>{batchsize,win_samp,1});
    
    
    if (interpreter->AllocateTensors() != kTfLiteOk)
    {
        fprintf(stderr, "Failed to allocate tensor\n");
        exit(-1);
    }

    // interpreter->SetAllowFp16PrecisionForFp32(true);
    interpreter->SetNumThreads(12);

    memcpy(interpreter->typed_input_tensor<int8_t>(0), output_data,size_shape*sizeof(*output_data));
    // Inference
    std::chrono::system_clock::time_point start, end;
    start = std::chrono::system_clock::now();
    interpreter->Invoke();
    end = std::chrono::system_clock::now();
    auto inference_time = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    // Get Output
    int8_t* output = interpreter->typed_output_tensor<int8_t>(0);
    
    for (int i=0;i<batchsize;i++){
        std::cout<<i<<"/   "<<output[i*2]+0<<"     "<<output[i*2+1]+0 <<"  "<<std::endl;
    }
    std::cout<<"Inference time: "<<(float)((float)inference_time/(batchsize*1000))<<std::endl;

    return 0;
}