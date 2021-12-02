#include <iostream>
#include "opencv2/objdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/videoio.hpp"

//void detectAndPoint ( &cv::CascadeClassifier detector, &cv::Mat frame );

int main()
{
    //-- Define detector & Load casecade
    cv::CascadeClassifier faceDetector;
    if( !faceDetector.load( "/home/pi/cpp_prac/opencv/data/haarcascades/haarcascade_frontalface_alt.xml" ) )
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
    cv::Mat frame;
    while( cap.read( frame ) )
    {
        if( frame.empty() )
        {
            std::cout << "No captured fram. Break" << std::endl;
            break;
        }

        //-- Apply the detector
        //detectAndPoint( faceDetector, frame );
        cv::Mat frame_gray;
        cv::cvtColor( frame, frame_gray, cv::COLOR_BGR2GRAY );
        cv::equalizeHist( frame_gray, frame_gray );

        // Detect faces
        std::vector<cv::Rect> faces;
        faceDetector.detectMultiScale( frame_gray, faces );

        for ( size_t i = 0; i < faces.size(); i++ )
        {
            cv::Point center( faces[i].x + faces[i].width/2, faces[i].y + faces[i].height/2 );
            cv::ellipse( frame, center, cv::Size( faces[i].width/2, faces[i].height/2 ), 0, 0, 360, cv::Scalar( 255, 0, 255 ), 4 );
        }

        cv::imshow( "Face Detection", frame );

        if( cv::waitKey(10) == 27 )
        {
            break; // escape
        }
    }
    std::cout << "Program Finished" << std::endl;
    return 0;
}
