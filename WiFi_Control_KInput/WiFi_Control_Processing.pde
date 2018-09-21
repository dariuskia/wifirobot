import processing.net.*;

Client c;

void setup() {
 size(800, 600);
 c = new Client(this, "192.168.4.1", 80);
}

void draw() {
  
}

void keyPressed() {
  if (keyCode == UP) c.write("F");
  else if (keyCode == LEFT) c.write("L");
  else if (keyCode == RIGHT) c.write("R");
  else if (keyCode == DOWN) c.write("B");
}

void keyReleased() {
  c.write("S");
}
