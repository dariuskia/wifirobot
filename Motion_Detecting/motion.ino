void forward() {
  analogWrite(13, 512);
  analogWrite(14, 0);
  analogWrite(15, 512);
  analogWrite(16, 0);
}

void reverse() {
  analogWrite(13, 0);
  analogWrite(14, 512);
  analogWrite(15, 0);
  analogWrite(16, 512);
}

void right() {
  analogWrite(13, 0);
  analogWrite(14, 512);
  analogWrite(15, 512);
  analogWrite(16, 0);
}

void left() {
  analogWrite(13, 512);
  analogWrite(14, 0);
  analogWrite(15, 0);
  analogWrite(16, 512);
}

void halt(int milliseconds) {
  digitalWrite(13, LOW);
  digitalWrite(14, LOW);
  digitalWrite(15, LOW);
  digitalWrite(16, LOW);
  delay(milliseconds);
}

