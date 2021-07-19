// red.pde

// colora lo schermo di rosso in base alla posizione del cursore

float value;

void setup() {
  size(500, 400);
}

void draw() {
  value = float(mouseX)/float(width) * 255;
  
  background(value, 0, 0);
  
  if (value < 50) {
    fill(255);
    ellipse(400, 100, 50, 50);
  } else if (value > 80) {
    fill(value, value, 0);
    ellipse(400, 100, 50, 50);
  }
}
