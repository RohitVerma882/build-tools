/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>

#ifndef AAPT2_JNI_H
#define AAPT2_JNI_H

#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_android_tools_aapt2_Aapt2Jni
 * Method:    ping
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_android_tools_aapt2_Aapt2Jni_ping
  (JNIEnv *, jclass);

/*
 * Class:     com_android_tools_aapt2_Aapt2Jni
 * Method:    compile
 * Signature: (Ljava/util/List;Lcom/android/tools/aapt2/Aapt2JniDiagnostics;)I
 */
JNIEXPORT jint JNICALL Java_com_android_tools_aapt2_Aapt2Jni_compile(JNIEnv*, jclass, jobject,
                                                                           jobject);

/*
 * Class:     com_android_tools_aapt2_Aapt2Jni
 * Method:    link
 * Signature: (Ljava/util/List;Lcom/android/tools/aapt2/Aapt2JniDiagnostics;)I
 */
JNIEXPORT jint JNICALL Java_com_android_tools_aapt2_Aapt2Jni_link(JNIEnv*, jclass, jobject,
                                                                        jobject);


/*
 * Class:     com_android_tools_aapt2_Aapt2Jni
 * Method:    convert
 * Signature: (Ljava/util/List;)I
 */
JNIEXPORT jint JNICALL Java_com_android_tools_aapt2_Aapt2Jni_convert(JNIEnv*, jclass, jobject);
                                                                        

#ifdef __cplusplus
}
#endif
#endif
