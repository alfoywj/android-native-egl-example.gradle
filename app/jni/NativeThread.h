#pragma once

#include <jni.h>
#include <pthread.h>
#include <android/native_window.h>

class NativeThread {
    JavaVM* JavaVm;
    jobject ActivityObject;
    pthread_t Thread;
    ANativeWindow* NativeWindow;
public:
    NativeThread();
    void Create(JNIEnv* env, jobject activityObject);
    static void* NativeThreadFunction(void* arg);
};
