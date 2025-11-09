#include "gripperlib.hpp"

void gripper::gripper_open()
{
  if (is_inverted == false)
  {
    gripper_servo->write(max_angle);
  }
  else
  {
    gripper_servo->write(min_angle);
  }
}
void gripper::gripper_close()
{
  if (is_inverted == false)
  {
    gripper_servo->write(min_angle);
  }
  else
  {
    gripper_servo->write(max_angle);
  }
}
gripper::gripper(Servo*servo, int min_angle, int max_angle, bool is_inverted)
{
  this->gripper_servo=servo;
  this->max_angle = max_angle;
  this->min_angle = min_angle;
  this->is_inverted = is_inverted;
}
