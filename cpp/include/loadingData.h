#include <iostream>
#include <cnpy.h>
#include <string>
#include <sstream>

class data_loader
{
public:
    data_loader(const char* pathData);
    ~data_loader(){};
    float* signal_vector_data();
    float* label_vector_data();
    std::vector<float> slice_vector(const std::vector<float>& vec, size_t start, size_t end);
    std::string vectorToString(const std::vector<float>& vec);
    std::string vectorToStringInt8(const std::vector<int8_t >& vec);
    std::vector<int8_t>slice_vector_int8(const std::vector<int8_t>& vec, size_t start, size_t end);
    std::vector<long unsigned int> num_samples;

private:
    cnpy::NpyArray data_ecg;
    cnpy::NpyArray label_ecg;
    long unsigned int *sample_size; 
    float * vec_data;
    float * vec_label;
};
