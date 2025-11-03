#pragma once
#include<Arduino.h>
#include<ESP32Servo.h>

#ifndef invert
#define invert false
#endif

#ifndef max_angle
#define max_angle 90
#endif

#ifndef min_angle
#define min_angle 0
#endif

    class gripper{
        
        public:
        static constexpr uint8_t max= static_cast<uint8_t>(max_angle);
        static constexpr uint8_t min= static_cast<uint8_t>(min_angle);
        static constexpr bool is_inverted=invert;
        void gripper_open();
        void gripper_close();
        gripper(byte pin);
        private:

            Servo gripper_servo;
    };
    