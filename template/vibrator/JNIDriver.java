/**
 *  JNIDriver Vibrator Template (JNIDriver)
 *  @author wzrabbit
 */

/**
 *  controlVibrator: 바이브레이터의 작동을 제어한다.
 *  @param command - 값이 1이면 바이브레이터 작동, 0이면 중지
 */
public void controlVibrator(int command) {
    if (!isConnected) return;
    writeVibrator((char) command);
}
