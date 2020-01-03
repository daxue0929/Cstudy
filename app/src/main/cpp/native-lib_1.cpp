#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_daxue_cstudy_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_daxue_cstudy_Test_StringTest(JNIEnv *env, jobject thiz) {
    // TODO: implement StringTest()
}