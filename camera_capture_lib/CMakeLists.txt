
cmake_minimum_required(VERSION 3.0.0)

project(display_image)
 
find_package( OpenCV REQUIRED )

include_directories(include ${OpenCV_INCLUDE_DIRS})
  
file(GLOB SOURCES "src/*.cpp")
 
# write cmake instructions to create camera_capture as a static library. 
# and install it in usr/lib directory 

# you can take help from this webpage: http://derekmolloy.ie/hello-world-introductions-to-cmake/
