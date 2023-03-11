#include "opencv2/opencv.hpp"

int main(int argh, char* argv[])
{
    // カメラに接続する
    cv::VideoCapture cap(0);

    // 接続できなければエラーを吐く
    if(!cap.isOpened())
    {
	    std::cout << "Failed to Open Camera !!" << std::endl;
        return -1;
    }

    // フレームを格納するための変数を定義
    cv::Mat rawFrame, flipFrame;
    while(cap.read(rawFrame))
    {
        // 画像を左右反転させる
        cv::flip(rawFrame, flipFrame, 1);

        // 画像を表示
        // cv::imshow("raw frame", rawFrame);
        cv::imshow("fliped frame", flipFrame);

        const int key = cv::waitKey(1);
        if(key == 'q'){ // 'q' が押されると終了 (while文を抜ける)
            break;
        }else if(key == 's'){   // 's' が押されると画像を保存
            std:: cout << "take pictured!!" << std::endl;
            cv::imwrite("img.png", flipFrame);
        }
    }

    cv::destroyAllWindows();
    std::cout << "Program Finishied Properly" << std::endl;
    return 0;
}
