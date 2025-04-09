#include <Newping.h>
int velocidad_actual = 0;

NewPing sonar[SONAR_NUM] = {
  NewPing(triggerPin1, echoPin1, 10),// Front
  NewPing(triggerPin2, echoPin2, MAX_DISTANCE_SIDES), //left
  NewPing(triggerPin3, echoPin3, MAX_DISTANCE_SIDES) //right
};

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

void avanzar(int velocidad_deseada, int time, int angulo_deseado, int velocidad_actual){
     digitalWrite(in1 , HIGH);
     digitalWrite(in2, LOW);
     angulo_giro(angulo_desado);
     acelerar_desacelerar(velocidad_deseada, time);


}

void acelerar_desacelerar(int velocidad_deseada, int time, int velocidad_actual){
  if ( velocidad_deseada > velocidad_actual) {
     int delay_d = time/(velocidad_deseada-velocidad_actual);
     while(velocidad_acutual < veolicidad_deseada){
         velocidad_actual =+;
         analog.write(enb , velocidad_actual);
         delay(delay_d);
    }
  }
  else{
    int delay_d = time/(velocidad_actual-velocidad_deseada);
    while(velocidad_acutual > veolicidad_deseada){
      
         velocidad_actual =-;
         analog.write(enb , velocidad_actual);
         delay(delay_d);
    }

}
void angulo_giro(int angulo_deseado){
     int angulo_actual = 0
     if(angulo_actual == angulo deseado){
       pass;
     }
     else if(angulo_actual < angulo_deseado){
      while(angulo_ < veolicidad_deseada){
         velocidad_actual =+;
         analog.write(enb , velocidad_actual);
         delay(delay_d);
    }
     }
}
int get_colour(){
   int total = 0;
   int lecturas = 5;
  
  for(int i = 0; i < lecturas; i++) {
    total += analogRead(sensorIRPin);
    delay(10);
  }
  int value = total / lecturas;
  return vaule;
}
int medir_distancia(int trigger , int echo){
   digitalWrite(trigger, HIGH);
   delay(10);
   digitalWrite(trigger, LOW);
   int tiempo = pulseIn(echo, HIGH);
   int distancia = tiempo * 0.017;
   return distancia;

}
