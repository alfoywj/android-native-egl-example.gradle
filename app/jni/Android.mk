LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := nativeegl
LOCAL_SRC_FILES := $(wildcard $(LOCAL_PATH)/*.cpp)
LOCAL_LDLIBS += -llog -landroid -latomic -lEGL -lGLESv1_CM
LOCAL_CPPFLAGS += -std=c++11
include $(BUILD_SHARED_LIBRARY)
