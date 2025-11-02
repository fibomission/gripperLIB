#include <Arduino.h>
#include <ESP32Servo.h>
#include "grippertest.hpp"

namespace gripper{
    Servo servo;
    void setupservo(int signalpin){
        servo.attach(signalpin);
        servo.write(90);
    }
    pattern::pattern(byte patternstyle){
        this-> patternstyle = patternstyle;
        startT=millis();
        plus=1;
    }
        void pattern::select(){
            if (patternstyle==1){
                pattern1();
            }
        }
        void pattern::pattern1(){
            if (millis()-startT>=100){
                    int angle=servo.read();
                    if (angle==0){
                        plus=1;
                    }
                    else if (angle>=180){
                        plus=-1;
                    }
                    
                    startT=millis();
                    angle+=plus;
                    servo.write(angle);


            }
        }
    }
    
    

