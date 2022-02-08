#include "opencv2/opencv.hpp"

int main(int argh, char* argv[])
{
    cv::VideoCapture cap(0);

    if(!cap.isOpened())
    {
	    std::cout << "Failed to Open Camera !!" << std::endl;
        return -1;
    }

    cv::Mat rawFrame, flipFrame;
    while(cap.read(rawFrame))
    {
        //cv::imshow("raw frame", rawFrame);
        cv::flip(rawFrame, flipFrame, 1);
        cv::imshow("frame", flipFrame);

        const int key = cv::waitKey(1);
        if(key == 'q'/*113*/){
            break;
        }else if(key == 's'/*115*/){
            std:: cout << "take pictured!!" << std::endl;
            cv::imwrite("img.png", flipFrame);
        }
    }

    cv::destroyAllWindows();
    std::cout << "Program Finishied Properly" << std::endl;
    return 0;
}
