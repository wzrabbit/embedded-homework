/**
 * JNIDriver LED Template (JNICDriver)
 * @file JNICDriver.c
 * @author wzrabbit
 */

int led_fd = 0;

// writeLED: lightLED를 통해 호출되며, LED를 점등시킨다.
JNIEXPORT void JNICALL Java_com_wz_projectName_writeLED
(JNIEnv *env, jobject obj, jbyteArray arr, jint count) {
    jbyte led_chars = (*env)->GetByteArrayElements(env, arr, 0);
    
    if (fd > 0) write(led_fd, (unsigned char*) led_chars, count);
    (*env)->ReleaseByteArrayElements(env, arr, led_chars, 0);
}