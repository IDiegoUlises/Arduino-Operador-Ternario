boolean estado = false;

void setup() {
  Serial.begin(9600);

}

void loop() {
  estado ? Serial.println("valor verdadero") : Serial.println("valor falso");
}
