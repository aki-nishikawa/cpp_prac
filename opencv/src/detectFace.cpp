#include <iostream>
#include "opencv2/objdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/videoio.hpp"

//void detectAndPoint ( &cv::CascadeClassifier detector, &cv::Mat frame );

int main(int argc, char *argv[])
{

    if(argc != 2)
    {
        std::cerr << "Usage: ./detectFace [path to cascade]" << std::endl;
        return 1;
    }

    //-- Define detector & Load casecade
    cv::CascadeClassifier faceDetector;
    if( !faceDetector.load(argv[1]))
    {
        std::cerr << "Error loading face cascade" << std::endl;
        return -1;
    };

    //-- Open camera
    cv::VideoCapture cap(0);
    if( !cap.isOpened() )
    {
        std::cerr << "Error!! Failed to Open Camera !!" << std::endl;
        return -1;
    }

    //-- Read frame & Apply detector
    cv::Mat rawFrame, grayFrame;
    while( cap.read( rawFrame ) )
    {
        if( rawFrame.empty() )
        {
            std::cout << "No captured fram. Break" << std::endl;
            break;
        }

        cv::flip(rawFrame, rawFrame, 1);

        //-- Apply the detector
        //detectAndPoint( faceDetector, frame );
        cv::cvtColor( rawFrame, grayFrame, cv::COLOR_BGR2GRAY );
        cv::equalizeHist( grayFrame, grayFrame );

        // Detect faces
        std::vector<cv::Rect> faces;
        faceDetector.detectMultiScale( grayFrame, faces );

        for ( size_t i = 0; i < faces.size(); i++ )
        {
            cv::Point center( faces[i].x + faces[i].width/2, faces[i].y + faces[i].height/2 );
            cv::ellipse( rawFrame, center, cv::Size( faces[i].width/2, faces[i].height/2 ), 0, 0, 360, cv::Scalar( 255, 0, 255 ), 4 );
        }

        cv::imshow( "Face Detection", rawFrame);

        if( cv::waitKey(10) == 27 )
        {
            break; // escape
        }
    }
    std::cout << "Program Finished" << std::endl;
    return 0;
}
