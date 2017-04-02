//
// Created by Administrator on 2017/4/2.
//
#include "cn_sxh_androidjni_JNI.h"
/*
 * Class:     cn_sxh_androidjni_JNI
 * Method:    sayHello
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_cn_sxh_androidjni_JNI_sayHello
  (JNIEnv *env, jobject obj){
     return (*env)->NewStringUTF(env,"This just a test for Android Studio NDK JNI developer!");
  }


