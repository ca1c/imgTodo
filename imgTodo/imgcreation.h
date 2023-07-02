#ifndef IMGCREATION_H_INCLUDED
#define IMGCREATION_H_INCLUDED

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <string>

using namespace cv;
using namespace std;

/* Creates and returns empty image matrix with opencv.
*  
*  Precondition:
*		width is a reference to integer variable
*		that defines the width of the image
* 
*		height is a reference to integer variable
*		that defines the height of the image
* 
*		(in pixels)
* 
*  Postcondition:
*		empty cv::Mat image matrix is returned by the
*		function
*		
*/

Mat blankImageMatrix(int width, int height);

/* Writes text onto cv::Mat image and returns the matrix
*
*  Precondition:
*		image is a reference to an image matrix
*		created with the cv libary
*
*		textArray is a reference to a string array variable
*		for which its contents are written on to the
*		given image matrix
* 
*		textArrayLength is a reference to an integer variable
*		that is the length of the input string array
* 
*		margintop is a reference to an int variable
*		that changes the top margin (in pixels) of the text
*
*  Postcondition:
*		cv::Mat image matrix with text written 
*		is returned by the function
*
*/

Mat writeTextToImage(Mat image, string textArray[], int textArrayLength, int marginTop);

/* Takes cv::Mat image matrix and saves as bitmap file
*
*  Precondition:
*		image is a reference to an image matrix
*		created with the cv libary
*
*		filePath is a reference to a string variable
*		that is representative of the system filepath
*		where the image will be saved
* 
*		fileName is the corresponding name of the file
*		that will be saved in filePath
*
*  Postcondition:
*		bitmap file is saved in '[filePath]/[fileName]'
*
*/

void saveImage(Mat image, string filePath, string fileName);

/*
* gets desktop resolution and returns the width and height
* in a pair type
* 
* width accessed by getDesktopResolution().first;
* height accessed by getDesktopResolution().second;
*/

pair<int, int> getDesktopResolution();

/*
* Opens opencv window preview for given image matrix
* 
* image is a reference to an image matrix variable
*/

void wallpaperPreview(Mat image);

#endif

