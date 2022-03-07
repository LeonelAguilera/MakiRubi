bool pasos[8][4] = {
  {1, 0, 0, 0},
  {1, 0, 1, 0},
  {0, 0, 1, 0},
  {0, 1, 1, 0},
  {0, 1, 0, 0},
  {0, 1, 0, 1},
  {0, 0, 0, 1},
  {1, 0, 0, 1}
};

void setup() {
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  for(int i = 0; i < 100; i++){
    pH(i);
  }
  delay(200);
  for(int i = 100; i > 0; i--){
    pH(i);
  }
  delay(1  00);
}

inline void pH(int i){
  digitalWrite(10, pasos[i%8][0]);
  digitalWrite(11, pasos[i%8][1]);
  digitalWrite(12, pasos[i%8][2]);
  digitalWrite(13, pasos[i%8][3]);
  delayMicroseconds(750);
}
