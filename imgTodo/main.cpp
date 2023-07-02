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

	string todoList[100];
	string currentItem;

	cout << "Enter todo list item or (q for quit): ";
	getline(cin, currentItem);

	int i = 0;
	while (currentItem != "q") {
		todoList[i] = currentItem;
		i++;

		cout << "Enter todo list item or (q for quit): ";
		getline(cin, currentItem);
	}

	Mat writtenImage = writeTextToImage(image, todoList, i, 50);

	string filePath;
	string fileName;

	cout << "Enter the path to save the image (C:\\Users\\You\\images\\): ";
	cin >> filePath;

	cout << "Enter the filename (no spaces): ";
	cin >> fileName;

	saveImage(writtenImage, filePath, fileName);
	setWallpaper(filePath + fileName + ".bmp");
	return 0;
}

