// terzo.pde

// colora un terzo dello schermo in base alla posizione del cursore

int posX = 0;
int width = 200;

void setup() {
  size(600, 400);
  fill(0);
}

void draw() {
  background(100);
  
  if (mouseX < 200) posX = 0;
  else if (mouseX < 400) posX = 200;
  else posX = 400;
  
  rect(posX, 0, width, 400);
}
