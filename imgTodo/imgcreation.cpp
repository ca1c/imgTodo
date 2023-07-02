#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include <vector>

#include "wtypes.h"
#include "imgcreation.h"

using namespace cv;
using namespace std;

Mat blankImageMatrix(int width, int height)
{
	return Mat::zeros(width, height, CV_8UC3);
}

Mat writeTextToImage(Mat image, string textArray[], int textArrayLength, int marginTop)
{
    Mat imageCopy = image;
    int listNumber = 1;
    int currentMarginTop = marginTop;
    int fontFace = FONT_HERSHEY_DUPLEX;
    double fontScale = 1.0;
    int thickness = 2;

    for (int i = 0; i < textArrayLength; ++i) {
        string listNumString = to_string(listNumber) + ". ";
        string text = textArray[i];
        Size textSize = getTextSize(text, fontFace, fontScale, thickness, 0);

        putText(imageCopy,
            listNumString + text,
            Point(imageCopy.cols / 2 - textSize.width / 2, currentMarginTop),
            fontFace,
            fontScale,
            CV_RGB(118, 185, 0), //font color
            thickness);

        currentMarginTop += marginTop;
        listNumber++;
    }

	return imageCopy;
}

pair<int, int> getDesktopResolution()
{
    RECT desktop;
    const HWND hDesktop = GetDesktopWindow();
    GetWindowRect(hDesktop, &desktop);

    pair<int, int> desktopDimensions;

    desktopDimensions.first = desktop.right;
    desktopDimensions.second = desktop.bottom;

    return desktopDimensions;
}

void saveImage(Mat image, string filePath, string fileName) 
{
    imwrite(filePath + fileName + ".bmp", image);
}
