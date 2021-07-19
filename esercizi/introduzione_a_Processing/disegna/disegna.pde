// disegna.pde

// disegna con il cursore

int redValue = 0;
int greenValue = 0;
int blueValue = 0;

void setup() {
  size(500, 400);
  background(240);
  stroke(30);
}

void draw() {
  fill(255, 0, 0);
  ellipse(450, 350, 30, 30);
  
  fill(0, 0, 0);
  ellipse(450, 300, 30, 30);
  
  fill(0, 255, 0);
  ellipse(450, 250, 30, 30);
  
  if (mousePressed) {
    stroke(redValue, greenValue, blueValue);
    line(pmouseX, pmouseY, mouseX, mouseY);
  
    float d = sqrt((mouseX-450)*(mouseX-450) + (mouseY-350)*(mouseY-350));
    if (d < 30) {
      redValue = 255;
      greenValue = 0;
    }
    
    d = sqrt((mouseX-450)*(mouseX-450) + (mouseY-300)*(mouseY-300));
    if (d < 30) {
      redValue = 0;
      greenValue = 0;
    }
    
    d = sqrt((mouseX-450)*(mouseX-450) + (mouseY-250)*(mouseY-250));
    if (d < 30) {
      redValue = 0;
      greenValue = 255;
    }
  }
}
