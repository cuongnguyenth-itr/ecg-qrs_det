#include <loadingData.h>
// #include <iostream>
// #include <cnpy.h>
// using namespace std;
/*
Range-based for loop
use this to specify what is key value inside npz file (stl_map data type)
for (const auto& pair : arr) {
    std::cout << pair.first << std::endl;  // Print the key
}
*/
data_loader::data_loader(const char* pathData){
    static cnpy::npz_t arr= cnpy::npz_load(pathData);
    data_ecg = arr["ecg"];
    label_ecg = arr["label"];
    vec_data=data_ecg.data<float>();
    vec_label=label_ecg.data<float>();
    num_samples=data_ecg.shape;
    // std::cout<<data_ecg.shape[0]<<std::endl;
}

float* data_loader::signal_vector_data(){
    return vec_data;
}
float* data_loader::label_vector_data(){
    return vec_label;
}

std::vector<float> data_loader::slice_vector(const std::vector<float>& vec, size_t start, size_t end) {
    // Check for valid indices
    if (start > end || end > vec.size()) {
        // throw std::out_of_range("Invalid start or end index");
        end=vec.size();
    }

    // Create subvector using range constructor
    return std::vector<float>(vec.begin() + start, vec.begin() + end);
}

std::string data_loader::vectorToString(const std::vector<float>& vec) {
    std::ostringstream oss;
    for (size_t i = 0; i < vec.size(); ++i) {

        if (i%2==1){
            oss << vec[i];
            oss<<"\n";
        }
        else {
            oss << (i/2)+1<<"/ ";
            oss << vec[i];
            oss << ",     ";
        }
    }
    return oss.str();
}

std::string data_loader::vectorToStringInt8(const std::vector<int8_t >& vec) {
    std::ostringstream oss;
    for (size_t i = 0; i < vec.size(); ++i) {

        if (i%2==1){
            oss << vec[i]+0;
            oss<<"\n";
        }
        else {
            oss << (i/2)+1<<"/ ";
            oss << vec[i]+0;
            oss << ",     ";
        }
    }
    return oss.str();
}

std::vector<int8_t> data_loader::slice_vector_int8(const std::vector<int8_t>& vec, size_t start, size_t end) {
    // Check for valid indices
    if (start > end || end > vec.size()) {
        // throw std::out_of_range("Invalid start or end index");
        end=vec.size();
    }

    // Create subvector using range constructor
    return std::vector<int8_t>(vec.begin() + start, vec.begin() + end);
}
// int main(){
//     data_loader *mydata= new data_loader("/home/huucuong/cpp/assets/data/data_100.npz");
//     float *ecg_sig=mydata->signal_vector_data();
//     std::cout<<ecg_sig[0]<<std::endl;
//     return 1;
// }
