#include <Servo.h>

Servo servo0;
Servo servo1;

int v1=0;
int v2=0;

int state=0;


void setup() {
  Serial.begin(9600);
   servo0.attach(10); 
   servo1.attach(11); 

}

void loop() {

   if(Serial.available() > 0){
       state = Serial.read();
  }


switch (state) {
case '0':         //adelante
    T(1000,1000);
    break;
case '1':        // detener
    O();
    break;

    
case '2':
    R(1400,1000);     //derecha
    break;
case '3':
   I(1400,1000);  //izquierda
    break;
   
case '4':
    T(2000,2000);  //atras
    break;
    
case '5':
   X(1000,2000); //vuelta mortal
    break;
 
}



 
 




 
}
