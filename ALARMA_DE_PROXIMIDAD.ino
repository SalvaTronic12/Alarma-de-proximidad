//declaracion de variables


int trig = 8;
int echo = 9;
int rojo = 10;
int amarillo = 11;
int verde =12;

void setup() {

 Serial.begin(9600);
 pinMode(rojo,OUTPUT);
 pinMode(amarillo,OUTPUT);
 pinMode(verde,OUTPUT);
 pinMode(trig,OUTPUT);
 pinMode(echo,INPUT);


digitalWrite(trig,LOW);
}


void loop() {

long tiempo;
long distancia;


digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);

 tiempo= pulseIn(echo,HIGH);

 distancia=(tiempo/2)/29;

Serial.println(distancia);

if(distancia<=25 && distancia>15){

  digitalWrite(rojo,LOW);
  digitalWrite(amarillo,LOW);
  digitalWrite(verde,HIGH);

  
}
else if(distancia<=15 && distancia>5){
  digitalWrite(rojo,LOW);
  digitalWrite(amarillo,HIGH);
  digitalWrite(verde,LOW);

 
}
else if(distancia<=5){

  digitalWrite(rojo,HIGH);
  digitalWrite(amarillo,LOW);
  digitalWrite(verde,LOW);
  
}
else{
  digitalWrite(rojo,LOW);
  digitalWrite(amarillo,LOW);
  digitalWrite(verde,LOW);
}

}
