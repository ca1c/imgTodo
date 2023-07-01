#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

#include "imgcreation.h"

using namespace cv;
using namespace std;

int main()
{
	Mat image = blankImageMatrix(1080, 1920);
	Mat writtenImage = writeTextToImage(image, "1. Hello World!");
	saveImage(writtenImage, "C:\\Users\\talon\\OneDrive\\Desktop\\", "imgTest");
	imshow("Display Window", writtenImage);
	waitKey(0);
	return 0;
}