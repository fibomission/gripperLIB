#pragma once
#include <Arduino.h>
#include <Servo.h>
#ifdef pattern1
const int pattern=1;
#elifdef pattern2
const int pattern=2;
#elifdef pattern3
const int pattern=3;
#else 
const int pattern=4;
#endif
namespace gripper{
    extern Servo servo;
    void setupservo(int signalpin);

    class pattern{
        

    
    public:
        pattern(byte patternstyle);
        
        void select();
    private:
        void pattern1();
        byte patternstyle;
        unsigned long startT;
        int plus;
        byte signalpin;
            

    };

    
}