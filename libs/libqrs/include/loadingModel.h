#include <iostream>
#include <onnxruntime_cxx_api.h>
#include <logs.h>
#include <vector>


class qrs_detection
{
public:
    qrs_detection(const char* model_path);
    ~qrs_detection(){};
    float* detect(const std::vector<_Float32> &input);


private:
    Ort::Env env;
    Ort::RunOptions runOptions;
    Ort::Session session{nullptr};
    int32_t num_samps;
    // std::vector<_Float32>
    std::array<int64_t, 3> inputShape;
    std::array<int64_t, 2> outputShape;

    std::vector<const char*> InputNames;
    std::vector<const char*> OutputNames;
    std::vector<int64_t> outputTensorShape;
    std::vector<int64_t> inputTensorShape;

};
