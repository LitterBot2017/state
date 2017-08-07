cmake_minimum_required(VERSION 2.8.3)
project(state)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  message_generation
)

add_message_files(
  FILES
)

generate_messages(
  DEPENDENCIES
  std_msgs
)

catkin_package(
   CATKIN_DEPENDS 
)

include_directories(include/state)
include_directories(
  ${catkin_INCLUDE_DIRS}
)

## Declare a C++ executable
add_executable(state src/state.cpp)
add_dependencies(state ${catkin_EXPORTED_TARGETS})
target_link_libraries(state ${catkin_LIBRARIES})
