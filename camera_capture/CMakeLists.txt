
cmake_minimum_required(VERSION 3.0.0)

project(display_image)
 
find_package( OpenCV REQUIRED )

include_directories(include ${OpenCV_INCLUDE_DIRS})
  
file(GLOB SOURCES "src/*.cpp")
 
add_executable(${PROJECT_NAME} ${SOURCES} )

target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS} )

#message("openCV includes are "  ${OpenCV_INCLUDE_DIRS})
#message("openCV libs are "  ${OpenCV_LIBS})
