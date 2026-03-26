cmake_minimum_required(VERSION 3.8)
project(carryall_navigation)

find_package(ament_cmake REQUIRED)

install(DIRECTORY
  launch
  maps
  params
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
