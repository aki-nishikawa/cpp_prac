#include<iostream>
#include<stdio.h>
#include<opencv2/opencv.hpp>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        std::cerr << "Usage: ./displayImage.out [image_path]" << std::endl;
        return 1;
    }

    cv::Mat image;
    image = cv::imread(argv[1], 1);

    if(!image.data)
    {
        std::cerr << "ERROR: No Image Data" << std::endl;
        return 1;
    }

    cv::namedWindow("Image", cv::WINDOW_AUTOSIZE);
    cv::imshow("Image", image);

    cv::waitKey(0);

    return 0;
}