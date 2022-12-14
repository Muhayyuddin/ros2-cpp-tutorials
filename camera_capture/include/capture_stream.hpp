#ifndef CAMERA_CAPTURE_H
#define CAMERA_CAPTURE_H

#include <opencv2/opencv.hpp>

class CameraCapture
{
public:
    CameraCapture(int device_id);
    void display_image();

private:
    cv::Mat image;
    cv::VideoCapture cap;
};

#endif