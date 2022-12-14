#include "capture_stream.hpp"
#include <iostream>

CameraCapture::CameraCapture(int device_id) : cap{device_id}
{
}

void CameraCapture::display_image()
{
    cv::namedWindow("Display window");

    if (!cap.isOpened())
    {
        std::cout << "cannot open camera";
    }

    while (true)
    {
        cap >> image;
        cv::imshow("Display window", image);
        cv::waitKey(25);
    }
}
