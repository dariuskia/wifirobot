
const int trigPin = 12;
const int echoPin = 0;

long duration;
int distance;

void setup() {
  Serial.begin(115200);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
}

void loop() {
  int distance = ultrasound();
  if (distance < 1200) {
    Serial.println(distance);
  }
  if (distance >= 25) {
    forward();
  } else {
    left();
    delay(850);
    distance = ultrasound();
    if (distance < 30) {
      right();
      delay(1750);
      distance = ultrasound();
    }
  }

  /*
  if (distance > 25) {
    forward();
    Serial.println("Moving forward...");
  } else {
    reverse();
    halt(300);
    Serial.println("Moving left...");
    distance = ultrasound();
    int elapsedTime = millis();
    int min = 30;
    while (distance < min && millis()-elapsedTime <= 1400) {
      reverse();
      left();
      distance = ultrasound();
      min++;
    }
    halt(3000);
    while (distance < 30) {
      right();
      distance = ultrasound();
    }
    
  }        
  */                          
  delay(50);
}
