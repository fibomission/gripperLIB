#include<Arduino.h>
#include<gripperlib.hpp>
#include<ESP32Servo.h>

#define pin 2
Servo servo;
gripper gripper1(
    
    &servo,0,90,true
);

void setup(){
    Serial.begin(12345);
    servo.attach(pin);
}
void loop(){
    gripper1.gripper_close();
    delay(2000);
    gripper1.gripper_open();
    delay(2000);
}