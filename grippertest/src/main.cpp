#include<Arduino.h>
#include<grippertest.hpp>
uint8_t signalpin = 8;
gripper::pattern mygripper(1);
void setup(){
    gripper::setupservo(signalpin);
}
void loop(){
    mygripper.select();
}