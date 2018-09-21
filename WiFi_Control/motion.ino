void forward() {
  analogWrite(13, 1023);
  analogWrite(14, 0);
  analogWrite(15, 1023);
  analogWrite(16, 0);
}

void reverse() {
  analogWrite(13, 0);
  analogWrite(14, 1023);
  analogWrite(15, 0);
  analogWrite(16, 1023);
}

void right() {
  analogWrite(13, 0);
  analogWrite(14, 1023);
  analogWrite(15, 1023);
  analogWrite(16, 0);
}

void left() {
  analogWrite(13, 1023);
  analogWrite(14, 0);
  analogWrite(15, 0);
  analogWrite(16, 1023);
}

void halt() {
  digitalWrite(13, LOW);
  digitalWrite(14, LOW);
  digitalWrite(15, LOW);
  digitalWrite(16, LOW);
}

