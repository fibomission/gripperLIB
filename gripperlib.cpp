#include "gripperlib.hpp"

      void gripper::gripper_open(){
        if (is_inverted==false){
        gripper_servo.write(max);
        }
        else{
          gripper_servo.write(min);
        }
      }
      void gripper::gripper_close(){
        if (is_inverted==false){
        gripper_servo.write(min);
        }
        else{
          gripper_servo.write(max);
        }
      }
      gripper::gripper(byte pin){
        gripper_servo.attach(pin);
      }

