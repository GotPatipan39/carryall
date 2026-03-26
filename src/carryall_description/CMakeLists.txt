cmake_minimum_required(VERSION 3.8)
project(carryall_description)

find_package(ament_cmake REQUIRED)
find_package(urdf REQUIRED)

install(DIRECTORY
  urdf
  meshes
  launch
  worlds
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
