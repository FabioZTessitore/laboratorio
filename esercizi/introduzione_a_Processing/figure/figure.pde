// figure.pde

// ricrea su schermo una porzione di piano cartesiano

// piano cartesiano di riferimento (8 x 6)
float X_min = -3;
float X_max = 5;
float Y_min = -2;
float Y_max = 4;

void setup() {
  // schermo (800 x 600) con piano (8 x 6)
  // cosi' le distanze dai bordi x-X-min e Y_max-y dei punti
  // vanno moltiplicate entrambe per 100
  // e la figura non viene distorta
  size(800, 600);
  
  stroke(30);
  fill(150);
}

void draw() {
  background(245);
  
  // trasformazioni per le coordinate dei punti:
  // x_pixel = (x - X_min)/(X_max - X_min) * screen_width
  // y_pixel = (Y_max - y)/(Y_max - Y_min) * screen_height
  
  // asse x
  // dal punto (X_min, 0) al punto (X_max, 0)
  float p1_x = X_min;
  float p1_y = 0;
  float p2_x = X_max;
  float p2_y = 0;
  line((p1_x - X_min)/(X_max - X_min) * width,
        (Y_max - p1_y)/(Y_max - Y_min) * height,
        (p2_x - X_min)/(X_max - X_min) * width,
        (Y_max - p2_y)/(Y_max - Y_min) * height);
  
  // asse y
  // dal punto (0, Y_min) al punto (0, Y_max)
  p1_x = 0;
  p1_y = Y_min;
  p2_x = 0;
  p2_y = Y_max;
  line((p1_x - X_min)/(X_max - X_min) * width,
        (Y_max - p1_y)/(Y_max - Y_min) * height,
        (p2_x - X_min)/(X_max - X_min) * width,
        (Y_max - p2_y)/(Y_max - Y_min) * height);
        
  // cerchio di raggio 2 e centro (2, 1)
  float cerchio_raggio = 2;
  float cerchio_centro_x = 2;
  float cerchio_centro_y = 1;
  // oltre alle coordinate del centro
  // bisogna trasformare il raggio (componente orizzontale e verticale).
  // Nota: ellipse vuole l'estensione della figura, quindi i diametri
  ellipse((cerchio_centro_x - X_min)/(X_max - X_min) * width,
          (Y_max - cerchio_centro_y)/(Y_max - Y_min) * height,
          2 * cerchio_raggio * width / (X_max - X_min),
          2 * cerchio_raggio * height / (Y_max - Y_min));
          
  // un rettangolo
  p1_x = -2;
  p1_y = 3.5;
  p2_x = -.5;
  p2_y = -1;
  // potrebbero essere negative, ma non e' un problema (vedi dopo)
  float rect_width = p2_x - p1_x;
  float rect_height = p1_y - p2_y;
  rect((p1_x - X_min)/(X_max - X_min) * width,
        (Y_max - p1_y)/(Y_max - Y_min) * height,
        rect_width * width / (X_max - X_min),
        rect_height * height / (Y_max - Y_min));
        
  // un altro rettangolo
  p1_x = 4;
  p1_y = -1.2;
  rect_width = -5;  // disegna all'indietro
  rect_height = .4;
  rect((p1_x - X_min)/(X_max - X_min) * width,
        (Y_max - p1_y)/(Y_max - Y_min) * height,
        rect_width * width / (X_max - X_min),
        rect_height * height / (Y_max - Y_min));
}
