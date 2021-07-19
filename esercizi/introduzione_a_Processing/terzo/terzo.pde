// terzo.pde

// colora un terzo dello schermo in base alla posizione del cursore

int posX = 0;

void setup() {
  size(600, 400);
  noStroke();
  fill(0);
}

void draw() {
  background(100);
  
  if (mouseX < width/3) posX = 0;
  else if (mouseX < width*2/3) posX = 200;
  else posX = 400;
  
  rect(posX, 0, width/3, 400);
}
