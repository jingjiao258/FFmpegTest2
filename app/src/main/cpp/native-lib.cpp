#include <jni.h>
#include <string>

extern "C"{
#include <libavutil/avutil.h>
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_jing_ffmpegtest2_FTJNITest_stringFromJNI(JNIEnv *env, jclass clazz) {
    // TODO: implement stringFromJNI()
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

const char *getFFmpegVer(){
    return av_version_info();
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_jing_ffmpegtest2_FTJNITest_geetFFmpegVersion(JNIEnv *env, jclass clazz) {
    // TODO: implement geetFFmpegVersion()
    return env ->NewStringUTF(getFFmpegVer());
}