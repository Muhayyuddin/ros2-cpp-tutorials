
cmake_minimum_required(VERSION 3.0.0)

project(my_calculator)
 
include_directories(include)
 
 
file(GLOB SOURCES "src/*.cpp")
 
# write cmake instructions to create calculator as a shared library. 
# and install it in usr/lib directory 


# you can take help from this webpage: http://derekmolloy.ie/hello-world-introductions-to-cmake/