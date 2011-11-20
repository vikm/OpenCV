#include <opencv2/core/core.hpp> 
#include <opencv2/highgui/highgui.hpp>


int main(int argc, char* argv[])
{

	IplImage* img = cvLoadImage("input_img.jpg");
	CvSize size = cvGetSize(img);
	cvRectangle(img, cvPoint(size.width/2-50, size.height/2-50), cvPoint(size.width/2+50, size.height/2+50), cvScalar(50, 20	0, 50), -1);
	cvSaveImage("output_img.jpg", img);
	cvNamedWindow("Image");
	cvShowImage("Image", img);
	cvWaitKey();
	cvReleaseImage(&img);
	cvDestroyWindow("Image");
	return 0;
}