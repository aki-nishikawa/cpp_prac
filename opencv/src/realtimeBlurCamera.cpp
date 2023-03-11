#include "opencv2/opencv.hpp"

int main(int argh, char* argv[])
{
    cv::VideoCapture cap(0);

    if(!cap.isOpened())
    {
	    std::cout << "Failed to Open Camera !!" << std::endl;
        return -1;
    }

    cv::Mat rawFrame, blurFrame;
    while(cap.read(rawFrame))
    {
        // ガウシアンブラーをかける
        for ( int i = 1; i < 31; i = i + 2 )
            cv::GaussianBlur(rawFrame, blurFrame, cv::Size(i, i), 0, 0);
        
        cv::imshow("raw frame", rawFrame);
        cv::imshow("gaussian blur", blurFrame);

        const int key = cv::waitKey(1);
        if(key == 'q'/*113*/){
            break;
        }
    }
    cv::destroyAllWindows();
    std::cout << "Program Finishied Properly" << std::endl;
    return 0;
}
