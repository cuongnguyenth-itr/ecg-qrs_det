#include <loadingModel.h>

qrs_detection::qrs_detection(const char* pathModel)
{    
    session = Ort::Session(env, pathModel, Ort::SessionOptions{nullptr});

    Ort::AllocatorWithDefaultOptions allocator;

    Ort::TypeInfo inputTypeInfo = session.GetInputTypeInfo(0);
    inputTensorShape = inputTypeInfo.GetTensorTypeAndShapeInfo().GetShape();

    Ort::TypeInfo outputTypeInfo = session.GetOutputTypeInfo(0);
    outputTensorShape = outputTypeInfo.GetTensorTypeAndShapeInfo().GetShape();
}

float* qrs_detection::detect(const std::vector<_Float32> &input)
{
    // run inference
    num_samps=input.size()/(inputTensorShape[1]*inputTensorShape[2]);
    inputShape[0]=num_samps;
    inputShape[1]=inputTensorShape[1];
    inputShape[2]=inputTensorShape[2];
    
    outputShape[0]=num_samps;
    outputShape[1]=outputTensorShape[1];
    
    std::vector<_Float32> results(num_samps*outputTensorShape[1]);
    
    auto memory_info = Ort::MemoryInfo::CreateCpu(OrtDeviceAllocator, OrtMemTypeCPU);
    auto inputTensor = Ort::Value::CreateTensor<float>(memory_info, (float*)input.data(), input.size(), inputShape.data(), inputShape.size());
    auto outputTensor = Ort::Value::CreateTensor<float>(memory_info, (float*)results.data(), results.size(), outputShape.data(), outputShape.size());
    Ort::AllocatorWithDefaultOptions ort_alloc;
    Ort::AllocatedStringPtr inputName = session.GetInputNameAllocated(0, ort_alloc);
    Ort::AllocatedStringPtr outputName = session.GetOutputNameAllocated(0, ort_alloc);
    const std::array<const char*, 1> inputNames = { inputName.get()};
    const std::array<const char*, 1> outputNames = { outputName.get()};

    inputName.release();
    outputName.release();
    session.Run(runOptions, inputNames.data(), &inputTensor, 1, outputNames.data(), &outputTensor, 1);

    return results.data();
}

int8_t* qrs_detection::detect_for_int8(const std::vector<int8_t> &input)
{
    // run inference
    num_samps=input.size()/(inputTensorShape[1]*inputTensorShape[2]);
    inputShape[0]=num_samps;
    inputShape[1]=inputTensorShape[1];
    inputShape[2]=inputTensorShape[2];
    
    outputShape[0]=num_samps;
    outputShape[1]=outputTensorShape[1];
    
    std::vector<int8_t> results(num_samps*outputTensorShape[1]);
    
    auto memory_info = Ort::MemoryInfo::CreateCpu(OrtDeviceAllocator, OrtMemTypeCPU);
    auto inputTensor = Ort::Value::CreateTensor<int8_t>(memory_info, (int8_t*)input.data(), input.size(), inputShape.data(), inputShape.size());
    auto outputTensor = Ort::Value::CreateTensor<int8_t>(memory_info, (int8_t*)results.data(), results.size(), outputShape.data(), outputShape.size());
    Ort::AllocatorWithDefaultOptions ort_alloc;
    Ort::AllocatedStringPtr inputName = session.GetInputNameAllocated(0, ort_alloc);
    Ort::AllocatedStringPtr outputName = session.GetOutputNameAllocated(0, ort_alloc);
    const std::array<const char*, 1> inputNames = { inputName.get()};
    const std::array<const char*, 1> outputNames = { outputName.get()};

    inputName.release();
    outputName.release();
    session.Run(runOptions, inputNames.data(), &inputTensor, 1, outputNames.data(), &outputTensor, 1);

    return results.data();
}

// int main() {
//     // qrs_det->qrs_detection("/home/huucuong/cpp/assets/qrsdet-model.onnx");

//     std::vector<_Float32> input2;

//     std::vector<_Float32> results;

//     for (int i = 0; i < 50; i++) {
//         for (int j = 0; j < 45; j++) {
//             input2.push_back(0.0);
//         }
//         for (int k = 0; k < 3; k++) {
//             // float temp=(float)k/100;
//             input2.push_back(1.0);
//         }
//         for (int k = 0; k < 97; k++) {
//             // float temp=(float)k/100;
//             input2.push_back(0.0);
//         }
//     }

//     for (int i = 0; i < 50; i++) {
//         for (int j = 0; j < 145; j++) {
//             input2.push_back(0.0);
//         }
//     }

//     qrs_detection *qrs_det = new qrs_detection("/home/huucuong/cpp/assets/model/qrsdet-model.onnx");
//     float* myARR=qrs_det->detect(input2);
//     std::cout<<myARR[101]<<std::endl;

// }

