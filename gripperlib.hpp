#pragma once
#include <Arduino.h>
#include <ESP32Servo.h>

#ifndef invert
#define invert false
#endif

class gripper
{

public:
    gripper(Servo*servo,int min_angle, int max_angle, bool is_inverted);
    void gripper_open();
    void gripper_close();

private:
    Servo*gripper_servo;
    int max_angle;
    int min_angle;
    bool is_inverted;
};
