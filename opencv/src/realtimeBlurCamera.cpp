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
        for ( int i = 1; i < 31; i = i + 2 )
            cv::GaussianBlur(frame, dst, cv::Size(i, i), 0, 0);
        
        //cv::imshow("raw frame", frame);
        cv::imshow("gaussian blur", dst);

        const int key = cv::waitKey(1);
        if(key == 'q'/*113*/){
            break;
        }
    }
    cv::destroyAllWindows();
    std::cout << "Program Finishied Properly" << std::endl;
    return 0;
}
