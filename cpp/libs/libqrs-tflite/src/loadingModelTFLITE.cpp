#include "loadingModelTFLITE.h"

TfliteClassifier::TfliteClassifier(const char* modelFileName, const char* dataFileName, int batchSize)
    : batch_size(batchSize), input_scale(0.006381112150847912), input_zero_point(-30) {
    my_data = new data_loader(dataFileName);
    ecg_sig = my_data->signal_vector_data();
    data_size = my_data->num_samples;
    size_shape = batch_size * data_size[1] * data_size[2];
    input_data = (float*)malloc(size_shape * sizeof(*ecg_sig));
    output_data = (int8_t*)malloc(size_shape * sizeof(int8_t));
    model = tflite::FlatBufferModel::BuildFromFile(modelFileName);
}

TfliteClassifier::~TfliteClassifier() {
    delete my_data;
    free(input_data);
    free(output_data);
}

void TfliteClassifier::LoadData() {
    memcpy(input_data, ecg_sig, size_shape * sizeof(*ecg_sig));
    std::cout<<"size_shape:  "<<size_shape<<std::endl;
}

void TfliteClassifier::PreprocessData() {
    for (int i = 0; i < size_shape; i++) {
        output_data[i] = (int8_t)(input_data[i] / input_scale + input_zero_point);
        // std::cout<<"size_shape:  "<<output_data[i]+0<<std::endl;
    }
}

void TfliteClassifier::LoadModel() {
    if (!model) {
        throw std::runtime_error("Failed to load model");
    }
}

void TfliteClassifier::AllocateTensors() {
    tflite::ops::builtin::BuiltinOpResolver resolver;
   tflite::InterpreterBuilder(*model.get(), resolver)(&interpreter);

   interpreter->ResizeInputTensor(/*tensor_index=*/0, std::vector<int>{batch_size,145,1});


   if (!interpreter) {
       throw std::runtime_error("Failed to initiate the interpreter");
   }
   if (interpreter->AllocateTensors() != kTfLiteOk) {
       throw std::runtime_error("Failed to allocate tensors");
   }
   interpreter->SetNumThreads(12);
   memcpy(interpreter->typed_input_tensor<int8_t>(0), output_data, size_shape * sizeof(*output_data));
}

void TfliteClassifier::Invoke() {
    std::chrono::system_clock::time_point start, end;
    start = std::chrono::system_clock::now();
    if (interpreter->Invoke() != kTfLiteOk) {
        throw std::runtime_error("Failed to invoke interpreter");
    }
    end = std::chrono::system_clock::now();
    inference_time = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
    std::cout << "Inference time: " << static_cast<float>(inference_time) / (batch_size * 1000) << " ms" << std::endl;
    output = interpreter->typed_output_tensor<int8_t>(0);
}

void TfliteClassifier::PrintResults() {
    std::vector<int8_t> input(output,output+batch_size*2);
    printed_result=my_data->vectorToStringInt8(input);
//    for (int i = 0; i < batch_size; ++i) {
//        std::cout << i << "/   " << +output[i * 2] << "     " << +output[i * 2 + 1] << "  " << std::endl;
//    }
}

// int main(int argc, char** argv) {
//     // if (argc != 2) {
//     //     std::cerr << "Usage: TfliteClassification.exe modelfile" << std::endl;
//     //     return -1;
//     // }

//     try {
//         const char* modelFileName = "/media/huucuong/Windows-SSD/cpp/assets/model/model1.tflite";
//         const char* dataFileName = "/media/huucuong/Windows-SSD/cpp/assets/data/data_100.npz";
//         int batchSize = 100;

//         TfliteClassifier classifier(modelFileName, dataFileName, batchSize);
//         classifier.LoadData();
//         classifier.PreprocessData();
//         classifier.LoadModel();
//         classifier.AllocateTensors();
//         classifier.Invoke();
//         classifier.PrintResults();
//     } catch (const std::exception& e) {
//         std::cerr << "Error: " << e.what() << std::endl;
//         return -1;
//     }

//     return 0;
// }
