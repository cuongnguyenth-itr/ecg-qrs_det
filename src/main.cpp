#include "loadingData.h"
#include "loadingModel.h"
#include <vector>
#include "logs.h"
#include <iostream>
#include <chrono> 

using namespace std;

qrs_detection *qrs_det;
data_loader *my_data;
float *ecg_sig;
float *my_det;
int8_t *my_det_int8;
size_t size_shape;
int batch_size=10000;
int num_batch=1;
int first_ind,last_ind;
int8_t* output_data;
float* input_data;

std::vector<long unsigned int> data_size;

int main(){
    qrs_det= new qrs_detection("assets/model/model1.onnx");
    // qrs_det= new qrs_detection("assets/model/qrsdet-model.onnx");
    // qrs_det= new qrs_detection("assets/model/quantize-model.onnx");
    my_data = new data_loader("data/data_100.npz");
    ecg_sig= my_data->signal_vector_data();
    data_size=my_data->num_samples;
    // num_batch=ceil((float)(data_size[0]/(float)batch_size));
    // cout<<data_size[0]<<" "<<num_batch<<endl;

    size_shape=data_size[0]*data_size[1]*data_size[2];
    std::vector<_Float32> input(ecg_sig,ecg_sig+size_shape);

    // std::vector<_Float32> sub_input;
    // ..................................................................
    float input_scale=0.006381112150847912;
    int input_zero_point=-30;

    input_data = (float *)malloc(size_shape*sizeof(*ecg_sig));
    output_data = (int8_t *)malloc(size_shape*sizeof(int8_t));

    memcpy(input_data, ecg_sig,size_shape*sizeof(*ecg_sig));

    for (int i=0;i<size_shape;i++){
        output_data[i]= (int8_t)(input_data[i] / input_scale + input_zero_point);
        // std::cout<<output_data[i]+0<<std::endl;
    } 
    std::vector<int8_t> input_int8(output_data,output_data+size_shape);

// ........................................................................
    for (int i=0;i<num_batch;i++){
        first_ind=i*batch_size*data_size[1];
        last_ind=(i+1)*batch_size*data_size[1];
        cout<< first_ind<<"  "<<last_ind<<endl;
        std::chrono::system_clock::time_point start, end;
        start = std::chrono::system_clock::now();
        // my_det = qrs_det->detect(my_data->slice_vector(input,first_ind,last_ind));
        my_det_int8 = qrs_det->detect_for_int8(my_data->slice_vector_int8(input_int8,first_ind,last_ind));
        end = std::chrono::system_clock::now();
        auto inference_time = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
        
        for (int i=0;i<batch_size;i++)
        {    
            cout<<i+1<<"/ "<<my_det_int8[i*2]+0<<",   "<<my_det_int8[i*2+1]+0<<endl;
        }   
        std::cout<<"Inference time: "<<(float)((float)inference_time/(batch_size*1000))<<std::endl;
    }
 

    // input.push_back(*ecg_sig);
    // for (int i;i<)
    
    // my_det = qrs_det->detect(input);
    // cout<<my_det.size()<<endl;
    // for (int i=0;i<200;i++){
    //     cout<<i<<" "<<my_det[i*2]<<" "<<my_det[i*2+1]<<endl;
    // }   
    return 1;
}