#include <opencv2/core/core.hpp> 
#include <opencv2/highgui/highgui.hpp>


int main(int argc, char* argv[])
{

	// load an image
	IplImage* img = cvLoadImage("input_img.jpg");
	// get image size
	CvSize size = cvGetSize(img);

	// draw a square
	cvRectangle(img, 
		//calculate position of centered 100x100px square
		cvPoint(size.width/2-50, size.height/2-50), 
		cvPoint(size.width/2+50, size.height/2+50),
		// white color filled square
		cvScalar(255,255,255), -1);

	// save new image
	cvSaveImage("output_img.jpg", img);

	// open a window and show the new image
	cvNamedWindow("Image");
	cvShowImage("Image", img);

	cvWaitKey();
	cvReleaseImage(&img);
	cvDestroyWindow("Image");
	return 0;
}