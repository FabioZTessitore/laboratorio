// notte.pde

// un paesaggio cittadino notturno

void setup() {
  size(500, 400);
}

void draw() {
  // cielo scuro
  background(30);
  
  // luna
  fill(200);
  ellipse(400, 100, 50, 50);
  
  // stelle
  fill(255);
  ellipse(100, 50, 5, 5);
  ellipse(320, 40, 5, 5);
  ellipse(250, 80, 5, 5);
  ellipse(180, 70, 5, 5);
  
  // palazzo
  fill(60);
  rect(100, 200, 80, 120);
  // e finestre
  fill(240, 220, 210);
  rect(120, 220, 10, 10);
  rect(150, 240, 10, 10);
  rect(120, 240, 10, 10);
  rect(150, 220, 10, 10);
  rect(120, 260, 10, 20);
  rect(150, 260, 10, 20);
}
