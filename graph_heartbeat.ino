void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(A1));
}

//tools->serial plotter->check band=9600
