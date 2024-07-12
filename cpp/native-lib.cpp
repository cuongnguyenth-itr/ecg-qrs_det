#include <jni.h>
#include <string>
//#include "loadingData.h"
//#include "loadingModel.h"
#include <vector>
#include "logs.h"
#include <iostream>
#include <android/asset_manager.h>
#include <android/asset_manager_jni.h>
#include <android/log.h>
#include <sstream>
#include "loadingModelTFLITE.h"
#if __ARM_NEON
#include <arm_neon.h>
#endif // __ARM_NEON
#define LOG_TAG "NativeAssetLoader"
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)


//qrs_detection *qrs_det;
//data_loader *my_data;
//float *ecg_sig;
//float *my_det;
//size_t size_shape;
//size_t size_shape_out;
//int batch_size=100;
//int num_batch=1;
//int first_ind,last_ind;
//std::string filepath="";
//std::vector<long unsigned int> data_size;

extern "C" {
JNIEXPORT jstring JNICALL
Java_com_example_myapplication_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */,
        jstring file_config_path
) {

    const char *file_config_path2 = (*env).GetStringUTFChars(file_config_path, 0);
//    qrs_det= new qrs_detection("/storage/emulated/0/Android/data/com.example.qrs_detection_app/files/resources/model/qrsdet-model.onnx");
//    filepath=std::string("/storage/emulated/0/Android/data/com.example.qrs_detection_app/files/resources/data/data_100.npz");
//    my_data = new data_loader(file_config_path2);
//    ecg_sig= my_data->signal_vector_data();
//    data_size=my_data->num_samples;
//    size_shape=data_size[0]*data_size[1]*data_size[2];
//    size_shape_out=num_batch*batch_size*2;
//    std::vector<float> input(ecg_sig,ecg_sig+size_shape);
//    my_det = qrs_det->detect(input);
//    for (int i=0;i<num_batch;i++){
//        first_ind=i*batch_size*data_size[1];
//        last_ind=(i+1)*batch_size*data_size[1];
//        my_det = qrs_det->detect(my_data->slice_vector(input,first_ind,last_ind));
//    }
//    std::vector<float> output(my_det,my_det+size_shape_out);
//    std::string result = my_data->vectorToString(output);
//    return file_config_path;
    return env->NewStringUTF("result.c_str()");

}
// public native boolean loadModel(AssetManager mgr, int modelid, int cpugpu);
JNIEXPORT jboolean JNICALL
Java_com_example_myapplication_Inference_loadModel(JNIEnv *env, jobject thiz,
                                                         jstring file_config_path_) {
//    const char *file_config_path2 = (*env).GetStringUTFChars(file_config_path_, 0);
//    my_data = new data_loader(file_config_path2);
//    ecg_sig= my_data->signal_vector_data();
//    data_size=my_data->num_samples;
//    size_shape=num_batch*batch_size*data_size[1]*data_size[2];
//    size_shape_out=num_batch*batch_size*2;
    return JNI_TRUE;
}
JNIEXPORT jstring JNICALL
Java_com_example_myapplication_MainActivity_stringFromJNITFLITE(
        JNIEnv *env,
        jobject /* this */,
        jstring file_config_path
) {

    const char *file_config_path2 = (*env).GetStringUTFChars(file_config_path, 0);
    
    const char* modelFileName = "/storage/emulated/0/Android/data/com.example.myapplication/files/resources/model/model1.tflite";
    const char* dataFileName = "/storage/emulated/0/Android/data/com.example.myapplication/files/resources/data/data_100.npz";
    int batchSize = 100;

    TfliteClassifier classifier(modelFileName, dataFileName, batchSize);
    classifier.LoadData();
    classifier.PreprocessData();
    classifier.LoadModel();
    classifier.AllocateTensors();
    classifier.Invoke();
    std::vector<int8_t> input(classifier.output,classifier.output+batchSize);
    classifier.PrintResults();

    // std::vector<float> input(ecg_sig,ecg_sig+size_shape);
    // my_det = qrs_det->detect(input);
    // std::vector<float> output(my_det,my_det+size_shape_out);
// std::string result = my_data->vectorToString(output);
    std::string s = "inference time:  "+std::to_string(classifier.inference_time)+"\n" + classifier.printed_result;
//    return env->NewStringUTF(classifier.printed_result.c_str());
    return env->NewStringUTF(s.c_str());

}
}