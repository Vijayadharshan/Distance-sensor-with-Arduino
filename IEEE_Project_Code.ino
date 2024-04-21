int cm = 0;

int Threshold = 0;

long readUltrasonicDistance(int triggerPin, int echoPin) {
 
  
  delayMicroseconds(2);
  pinMode(triggerPin, OUTPUT);  
  digitalWrite(triggerPin, LOW);
  // Sets trigger to HIGH for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin and returns the sound wave travel time in microseconds(ms)
  return pulseIn(echoPin, HIGH);
}

void setup() {
  Serial.begin(9600)
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  Threshold = 15;
  // Using Speed distance time relation we get the value of distance in cm (Distance(cm) = (speed of sound in air(cm/ms)(0.0344 cm/ms)*time(ms))/2, 
  // As the sensor reads the time for a round trip we divide the value by 2.
  cm = 0.0172 * readUltrasonicDistance(7, 6);
  Serial.print(cm);
  Serial.println("cm");
  
  
  if (cm > Threshold) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }
  if (cm <= Threshold && cm > Threshold - 5) {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }
  if (cm <= Threshold - 5 && cm > Threshold - 10) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  }
  if (cm <= Threshold - 10 && cm > Threshold - 15) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }
  if (cm <= Threshold - 15) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }
  // Wait 100 milliseconds
  delay(100); 
}