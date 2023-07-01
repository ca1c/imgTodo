#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include "imgcreation.h"

using namespace cv;
using namespace std;

Mat blankImageMatrix(int width, int height)
{
	return Mat::zeros(width, height, CV_8UC3);
}

Mat writeTextToImage(Mat image, string text)
{
    Mat imageCopy = image;

    /*
    * so this little thing here: imageCopy.cols / 2 - 6.6 * text.length()
    * basically this parameter is for the x position of the text
    * imageCopy.cols / 2 sets the text to START at the middle (horizontally) of the image
    * so I did some trial and error until I subtracted the number of columns
    * that seemed to center the image
    * then I divided the length of the text by this number
    * so ultimately it was: text.length() / 100 = 6.6
    * text.length() was 15 at this point
    * so now to center the text horizontally
    * with this particular font and font size
    * i just do the operation shown above
    */

	putText(imageCopy,
        text,
        Point(imageCopy.cols / 2 - 6.6 * text.length(), 50),
        FONT_HERSHEY_DUPLEX,
        1.0,
        CV_RGB(118, 185, 0), //font color
        2);

	return imageCopy;
}

void saveImage(Mat image, string filePath, string fileName) {
    imwrite(filePath + fileName + ".bmp", image);
}
