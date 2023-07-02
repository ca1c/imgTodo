#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include <string>

#include "imgcreation.h"

using namespace cv;
using namespace std;

int main()
{
	pair<int, int> desktopResolution = getDesktopResolution();
	int desktopWidth = desktopResolution.first;
	int desktopHeight = desktopResolution.second;

	Mat image = blankImageMatrix(desktopHeight, desktopWidth);

	string myList[4] = { "Sweep Floor", "Check Email", "Eat", "Do Dishes" };

	Mat writtenImage = writeTextToImage(image, myList, sizeof(myList) / sizeof(myList[0]), 50);
	saveImage(writtenImage, "C:\\Users\\talon\\OneDrive\\Desktop\\", "imgTest");
	imshow("Display Window", writtenImage);
	waitKey(0);
	return 0;
}