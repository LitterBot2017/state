#include "ros/ros.h"

#include <sensor_msgs/Joy.h>

// Subscribers
ros::Subscriber joystick_sub;

#define WAITING 1
#define CALCULATING_WAYPOINTS 2
#define NAVIGATION 3
#define VISUAL_SERVO_TO_FRONT 4
#define MOVE_TO_DOWNWARD 5
#define VISUAL_SERVO_DOWNWARD 6
#define CLASSIFICATION 7
#define ARM_TO_OBJECT 8
#define VACUUM_ON 9
#define OBJECT_TO_BIN 10
#define VACUUM_OFF 11

int main(int argc, char **argv) {

}
