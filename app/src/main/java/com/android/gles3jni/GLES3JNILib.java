package com.android.gles3jni;

import android.app.Activity;
import android.view.Surface;

public class GLES3JNILib {
    static {
        System.loadLibrary("nativeegl");
    }
    public static native void OnCreate(Activity activityObject);
    public static native void OnStart();
    public static native void OnResume();
    public static native void OnPause();
    public static native void OnStop();
    public static native void surfaceCreated(Surface surface);
    public static native void surfaceChanged(Surface surface);
    public static native void surfaceDestroyed();
}
