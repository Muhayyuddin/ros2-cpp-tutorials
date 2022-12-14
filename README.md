# ros2-cpp-tutorials

The repository contains 4 directories 
1. calculator_example
2. camera_capture
3. calculator_lib
4. camera_capture_lib

The first 2 directories contains the example that we discussed in the discussion sessions. 

I have added two empty functions in the calculator class that are *factorial* and *fibonacci_series*. try to implement these functions and call them in the main.cpp to check if they are working fine.


3. calculator_lib

Directory contains the calculator.hpp, .cpp and cmake file. your task is to extend the cmake to create calculator as shared library and install it at /usr/lib location. You can take help from this webpage: http://derekmolloy.ie/hello-world-introductions-to-cmake/

4. camera_capture_lib

Directory contains the camera_capture.hpp, .cpp and cmake file. your task is to extend the cmake to create camera_capture as static library and install it at /usr/lib location. You can take help from this webpage: http://derekmolloy.ie/hello-world-introductions-to-cmake/

5. bonus tasks

Create a  C++ project that just contains main.cpp and CmakeLists.txt. Inside the CmakeLists.txt, add the created shared libraries (calculator lib). In main.cpp #include the header files from the shared library and call the calculator class functions.

Create a  C++ project that just contains main.cpp and CmakeLists.txt. Inside the CmakeLists.txt, add the created static library (camera_capture lib). in main.cpp #include the header files from the static library and call the functions from camera_capture class to open the camera. 

Good luck ...


