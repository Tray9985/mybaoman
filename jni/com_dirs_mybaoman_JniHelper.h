/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_dirs_mybaoman_JniHelper */

#ifndef _Included_com_dirs_mybaoman_JniHelper
#define _Included_com_dirs_mybaoman_JniHelper
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     com_dirs_mybaoman_JniHelper
 * Method:    init 
 * Signature: ()V
 * ��ʼ������
 */
JNIEXPORT void JNICALL Java_com_dirs_mybaoman_JniHelper_init
  (JNIEnv *, jobject);

/*
 * Class:     com_dirs_mybaoman_JniHelper
 * Method:    getImage
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 * ȡ��ͼƬ·�����ѻ���ֱ�ӷ��أ���������������
 */
JNIEXPORT jstring JNICALL Java_com_dirs_mybaoman_JniHelper_getImage
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     com_dirs_mybaoman_JniHelper
 * Method:    clearCache
 * Signature: ()V
 * ��ջ����ļ���
 */
JNIEXPORT void JNICALL Java_com_dirs_mybaoman_JniHelper_clearCache
  (JNIEnv *, jobject);

/*
 * Class:     com_dirs_mybaoman_JniHelper
 * Method:    delImage
 * Signature: (Ljava/lang/String;)Z
 * ɾ��ָ��ͼƬ
 */
JNIEXPORT jboolean JNICALL Java_com_dirs_mybaoman_JniHelper_delImage
  (JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif