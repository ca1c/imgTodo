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
*		text is a reference to a string variable
*		that is written onto the matrix image
*
*  Postcondition:
*		cv::Mat image matrix with text written 
*		is returned by the function
*
*/

Mat writeTextToImage(Mat image, string text);

/* Writes text onto cv::Mat image and returns the matrix
*
*  Precondition:
*		image is a reference to an image matrix
*		created with the cv libary
*
*		text is a reference to a string variable
*		that is written onto the matrix image
*
*  Postcondition:
*		cv::Mat image matrix with text written
*		is returned by the function
*
*/

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

#endif

