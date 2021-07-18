// tile.pde

// colora un quarto dello schermo in base alla posizione del cursore

int posX = 0;
int posY = 0;
int width = 250;
int height = 200;

void setup() {
  size(500, 400);
  fill(0);
}

void draw() {
  background(100);
  
  if (mouseX < 250 && mouseY < 200) {
    posX = posY = 0;
  } else if (mouseX < 250) {
    posX = 0;
    posY = 200;
  } else if (mouseX > 250 && mouseY < 200) {
    posX = 250;
    posY = 0;
  } else {
    posX = 250;
    posY = 200;
  }
  
  rect(posX, posY, width, height);
}
