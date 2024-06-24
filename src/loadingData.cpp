#include <loadingData.h>

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


// int main(){
//     data_loader *mydata= new data_loader("/home/huucuong/cpp/assets/data/data_100.npz");
//     float *ecg_sig=mydata->signal_vector_data();
//     std::cout<<ecg_sig[0]<<std::endl;
//     return 1;
// }
