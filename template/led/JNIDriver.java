/**
 *  JNIDriver LED Template (JNIDriver)
 *  @author wzrabbit
 */

/**
 *  lightLED: 점등시킬 LED의 정보가 주어지면, LED를 점등시킨다.
 *  @param ledData - 점등시킬 LED의 정보
 */
public void lightLED(byte[] ledData) {
    if (!isConnected) return;
    writeLED(ledData, ledData.length);
}
