// tratto.pde

// disegna con il cursore

void setup() {
  size(500, 400);
  background(240);
  stroke(30);
}

void draw() {
  line(pmouseX, pmouseY, mouseX, mouseY);
}
