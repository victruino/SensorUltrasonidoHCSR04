// declaramos las variables
int Trig=7;
int Echo=8;
int time1;
int distancia;


void setup() {
// Iniciamos el puerto serial para leer los datos
//a traves del monitor serial
Serial.begin(9600);
// configuramos los pines digitales
pinMode(Trig,OUTPUT);
pinMode(Echo,INPUT);

}

void loop() {
  //Iniciamos llevando el Trig a LOW para asegurarnos que no emita
  //ningun pulso
  digitalWrite(Trig,LOW);
  delayMicroseconds(20);
  // se envia el pulso
  digitalWrite(Trig,HIGH);
  delayMicroseconds(20);
  // se lleva el Trig nuevamete a LOW para que no emita mas
  digitalWrite(Trig,LOW);
  // tomamos el tiempo de la funcion pulseIn
  time1=pulseIn(Echo,HIGH);
  //Aplicamos la formula
  distancia=int((time1*0.034)/2);
  //Imprimos la distancia en el puerto serial
  Serial.print("Distancia: ");Serial.println(distancia);
  delay(1000);
 }

