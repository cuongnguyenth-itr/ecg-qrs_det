#include "loadingModelTFLITE.h"

int main(int argc, char** argv) {
    // if (argc != 2) {
    //     std::cerr << "Usage: TfliteClassification.exe modelfile" << std::endl;
    //     return -1;
    // }

    try {
        const char* modelFileName = "/media/huucuong/Windows-SSD/cpp/assets/model/model1.tflite";
        const char* dataFileName = "/media/huucuong/Windows-SSD/cpp/assets/data/data_100.npz";
        int batchSize = 100;

        TfliteClassifier classifier(modelFileName, dataFileName, batchSize);
        classifier.LoadData();
        classifier.PreprocessData();
        classifier.LoadModel();
        classifier.AllocateTensors();
        classifier.Invoke();
        classifier.PrintResults();
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return -1;
    }

    return 0;
}