#include <Servo.h>  // Include Servo library

Servo myServo;  // Create a servo object

void setup() {
    myServo.attach(9);  // Attach servo signal wire to Pin 9
}

void loop() {
    myServo.write(0);   // Move to 0 degrees
    delay(1000);        // Wait for a second
    myServo.write(90);  // Move to 90 degrees
    delay(1000);
    myServo.write(180); // Move to 180 degrees
    delay(1000);
}
