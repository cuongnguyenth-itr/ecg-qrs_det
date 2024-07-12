#include "loadingData.h"
#include "loadingModel.h"
#include <vector>
#include "logs.h"
#include <iostream>

using namespace std;

qrs_detection *qrs_det;
data_loader *my_data;
float *ecg_sig;
float *my_det;
size_t size_shape;
int batch_size=1500;
int num_batch;
int first_ind,last_ind;

std::vector<long unsigned int> data_size;

std::vector<_Float32> slice_vector(const std::vector<_Float32>& vec, size_t start, size_t end) {
    // Check for valid indices
    if (start > end || end > vec.size()) {
        // throw std::out_of_range("Invalid start or end index");
        end=vec.size();
    }

    // Create subvector using range constructor
    return std::vector<_Float32>(vec.begin() + start, vec.begin() + end);
}

int main(){
    qrs_det= new qrs_detection("assets/model/qrsdet-model.onnx");
    my_data = new data_loader("assets/data/data_100.npz");
    ecg_sig= my_data->signal_vector_data();
    data_size=my_data->num_samples;
    num_batch=ceil((float)(data_size[0]/(float)batch_size));
    cout<<data_size[0]<<" "<<num_batch<<endl;

    size_shape=data_size[0]*data_size[1]*data_size[2];
    std::vector<_Float32> input(ecg_sig,ecg_sig+size_shape);

    // std::vector<_Float32> sub_input;
    
    for (int i=0;i<num_batch;i++){
        first_ind=i*batch_size*data_size[1];
        last_ind=(i+1)*batch_size*data_size[1];
        // cout<< slice_vector(input,first_ind,last_ind).size()<<endl;
        my_det = qrs_det->detect(slice_vector(input,first_ind,last_ind));
    }
    cout<<input[93960000]<<" "<<input[94104999]<<endl;
    

    // input.push_back(*ecg_sig);
    // for (int i;i<)
    
    // my_det = qrs_det->detect(input);
    // cout<<my_det.size()<<endl;
    // for (int i=0;i<200;i++){
    //     cout<<i<<" "<<my_det[i*2]<<" "<<my_det[i*2+1]<<endl;
    // }   
    return 1;
}