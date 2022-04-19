// Servo - Version: Latest 
#include <Servo.h>

Servo myservo;

//112,150,20


void setup() {
    myservo.attach(9);
}

void loop() {
    myservo.write(112);
    delay(1000);
    
    myservo.write(150);
    delay(1000);
    
    myservo.write(20);
    delay(1000);
}
