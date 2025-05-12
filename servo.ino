#include <Servo.h>

const int trigPin = 8;
const int echoPin = 7;
const int fanPin = 6;
const int servoPin = 9;

Servo myServo;

long duration;
float distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(fanPin, OUTPUT);
  myServo.attach(servoPin);
}

void loop() {
  // Baca jarak dari ultrasonic
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration / 58.0;

  if (distance < 40) {
    digitalWrite(fanPin, HIGH);

    // Servo bolak-balik terus selama objek dekat
    while (distance < 40) {
      // Servo 0 → 180
      for (int pos = 0; pos <= 180; pos++) {
        myServo.write(pos);
        delay(15);
      }
      // Servo 180 → 0
      for (int pos = 180; pos >= 0; pos--) {
        myServo.write(pos);
        delay(15);
      }

      // Update jarak lagi agar bisa keluar dari loop saat objek menjauh
      digitalWrite(trigPin, LOW);
      delayMicroseconds(2);
      digitalWrite(trigPin, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigPin, LOW);
      duration = pulseIn(echoPin, HIGH);
      distance = duration / 58.0;
    }

    digitalWrite(fanPin, LOW); // Matikan fan setelah keluar loop
  } else {
    digitalWrite(fanPin, LOW);
  }

  delay(100);
}
