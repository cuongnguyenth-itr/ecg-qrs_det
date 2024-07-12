#ifndef TFLITECLASSIFIER_H
#define TFLITECLASSIFIER_H

#include <string>
#include <vector>
#include <memory>
#include "tensorflow/lite/interpreter.h"
#include "tensorflow/lite/kernels/register.h"
#include "tensorflow/lite/model.h"
#include "loadingData.h"
#include <iostream>
#include <chrono>
#include <cstring>


class TfliteClassifier {
public:
    TfliteClassifier(const char* modelFileName, const char* dataFileName, int batchSize);
    ~TfliteClassifier();

    void LoadData();
    void PreprocessData();
    void LoadModel();
    void AllocateTensors();
    void Invoke();
    void PrintResults();
    int8_t* output;
    std::string printed_result;
    long long inference_time;

private:
    std::unique_ptr<tflite::FlatBufferModel> model;
    std::unique_ptr<tflite::Interpreter> interpreter;
    data_loader* my_data;
    float* ecg_sig;
    std::vector<long unsigned int> data_size;
    size_t size_shape;
    int batch_size;
    int8_t* output_data;
    float* input_data;
    float input_scale;
    int input_zero_point;

};

#endif // TFLITECLASSIFIER_H
