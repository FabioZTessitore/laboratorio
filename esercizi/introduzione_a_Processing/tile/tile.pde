// tile.pde

// colora un quarto dello schermo in base alla posizione del cursore

int posX = 0;
int posY = 0;

void setup() {
  size(500, 400);
  noStroke();
  fill(0);
}

void draw() {
  background(100);
  
  if (mouseX < width/2 && mouseY < height/2) {
    posX = posY = 0;
  } else if (mouseX < width/2) {
    posX = 0;
    posY = height/2;
  } else if (mouseX > width/2 && mouseY < height/2) {
    posX = width/2;
    posY = 0;
  } else {
    posX = width/2;
    posY = height/2;
  }
  
  rect(posX, posY, width/2, height/2);
}
