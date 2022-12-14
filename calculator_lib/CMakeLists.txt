
cmake_minimum_required(VERSION 3.0.0)

project(my_calculator)
 
include_directories(include)
 
#set(SOURCES src/main.cpp src/calculator.cpp)
 
file(GLOB SOURCES "src/*.cpp")
 
#add_executable(my_calculator ${SOURCES})

add_executable(${PROJECT_NAME} ${SOURCES})