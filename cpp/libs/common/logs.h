#ifndef LOGS_H
#define LOGS_H

#include <stdarg.h>
//#define LOG_TAG "onnxruntime_inference"

#if defined(ANDROID) || defined(__ANDROID__)
// LOGS ANDROID
#include <android/log.h>
#define LOGV(LOG_TAG,...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG,__VA_ARGS__)
#define LOGD(LOG_TAG,...) __android_log_print(ANDROID_LOG_DEBUG  , LOG_TAG,__VA_ARGS__)
#define LOGI(LOG_TAG,...) __android_log_print(ANDROID_LOG_INFO   , LOG_TAG,__VA_ARGS__)
#define LOGW(LOG_TAG,...) __android_log_print(ANDROID_LOG_WARN   , LOG_TAG,__VA_ARGS__)
#define LOGE(LOG_TAG,...) __android_log_print(ANDROID_LOG_ERROR  , LOG_TAG,__VA_ARGS__)
#define LOGSIMPLE(...)
#else
        // LOGS NO ANDROID
#include <stdio.h>
#define LOGV(LOG_TAG,...) printf("  ");printf(__VA_ARGS__); printf("\t -  <%s> \n", LOG_TAG);
#define LOGD(LOG_TAG,...) printf("  ");printf(__VA_ARGS__); printf("\t -  <%s> \n", LOG_TAG);
#define LOGI(LOG_TAG,...) printf("  ");printf(__VA_ARGS__); printf("\t -  <%s> \n", LOG_TAG);
#define LOGW(LOG_TAG,...) printf("  * Warning: "); printf(__VA_ARGS__); printf("\t -  <%s> \n", LOG_TAG);
#define LOGE(LOG_TAG,...) printf("  *** Error:  ");printf(__VA_ARGS__); printf("\t -  <%s> \n", LOG_TAG);
#define LOGSIMPLE(...) printf(" ");printf(__VA_ARGS__);
#endif // ANDROID
#endif
