/**
 * JNIDriver Vibrator Template (JNICDriver)
 * @file JNICDriver.c
 * @author wzrabbit
 */

int vibrator_fd = 0;

// writeVibrator: controlVibrator를 통해 호출되며, Vibrator를 커맨드에 따라 작동시키거나 중지한다.
JNIEXPORT void JNICALL Java_com_wz_projectName_controlVibrator
(JNIEnv *env, jobject obj, jchar char_command) {
    int command = (int) char_command;
    write(vibrator_fd, &command, sizeof(command));
}