#include "opencv2/opencv.hpp"

int main(int argh, char* argv[])
{
    cv::VideoCapture cap(0);

    if(!cap.isOpened())
    {
	std::cout << "Failed to Open Camera !!" << std::endl;
        return -1;
    }

    cv::Mat frame;
    cv::Mat dst; 
    while(cap.read(frame))
    {
        cv::imshow("raw frame", frame);

        const int key = cv::waitKey(1);
        if(key == 'q'/*113*/){
            break;
        }else if(key == 's'/*115*/){
            std:: cout << "take pictured!!" << std::endl;
            cv::imwrite("img.png", frame);
        }
    }
    cv::destroyAllWindows();
    std::cout << "Program Finishied Properly" << std::endl;
    return 0;
}
