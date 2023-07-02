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

	string myList[4] = { "Do Dishes", "Clean Room", "Do Homework", "Schedule Appointment"};

	Mat writtenImage = writeTextToImage(image, myList, sizeof(myList) / sizeof(myList[0]), 50);

	string filePath = "C:\\Users\\talon\\OneDrive\\Desktop\\";
	string fileName = "imgTest";

	saveImage(writtenImage, filePath, fileName);
	setWallpaper(filePath + fileName + ".bmp");
	return 0;
}