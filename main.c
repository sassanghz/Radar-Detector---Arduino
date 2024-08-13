#include <Servo.h>
// pins for ultrasonic sensor
const int trigPin = 9;
const int echoPin = 10;

// pins for servo motor
const int servoPin = 11;

// pin for buzzer
const int alertPin = 12;

// range for detection
const int detectionRange = 30;

Servo servo;

void setup() {
    Serial.begin(9600);

    // Set up sensor pins
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);

    // Set up alert pin
    pinMode(alertPin, OUTPUT);

    // Attach the servo to the servo pin
    servo.attach(servoPin);
}



int main(void) {
    printf("Hello, World!\n");
    return 0;
}
