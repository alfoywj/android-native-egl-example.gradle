//
// Created by Wooju on 2020-12-15.
//

#include "NativeThread.h"
#include "logger.h"

#define LOG_TAG "NativeThread"

NativeThread::NativeThread() : Thread(0), NativeWindow(NULL) {

}
void NativeThread::Create(JNIEnv *env, jobject activityObject) {
    env->GetJavaVM(&this->JavaVm);
    ActivityObject = env->NewGlobalRef(activityObject);

    const int createErr = pthread_create(&Thread, NULL, NativeThreadFunction, this);
    if (createErr != 0) {
        LOG_ERROR("pthread_create returned %i", createErr);
    }
}

void* NativeThread::NativeThreadFunction(void *arg) {
    LOG_INFO("NativeThreadFunction start");
    LOG_INFO("NativeThreadFunction end");
}

