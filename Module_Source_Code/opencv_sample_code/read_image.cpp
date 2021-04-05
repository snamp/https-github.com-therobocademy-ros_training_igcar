#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
using namespace cv;
int main()
{

    Mat img = imread("robot.jpeg", 0);
    if(img.empty())
    {
        std::cout << "Could not read the image: " << std::endl;
        return 1;
    }
    imshow("Display window", img);
    int k = waitKey(0); // Wait for a keystroke in the window
    
    if(k == 'q')
    {
        imwrite("its_q.png", img);
    }
    else if(k == 's')
    {
        imwrite("its_s.png", img);
    }
    
    return 0;
}
