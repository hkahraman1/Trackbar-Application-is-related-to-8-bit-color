#include<opencv2/core.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/highgui.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int a = 0;
int mavi = 0;
int yesil = 0;
int kirmizi = 0;

void kirmizirenk(int, void*)
{

}

void mavirenk(int, void*)
{

}


void yesilrenk(int, void*)
{

}



void goster()
{
	Mat x(500, 500, CV_8UC3, Scalar(mavi, yesil, kirmizi));
	imshow("renk", x);
	createTrackbar("K", "Track", &kirmizi, 255, kirmizirenk);
	createTrackbar("M", "Track", &mavi, 255, mavirenk);
	createTrackbar("Y", "Track", &yesil, 255, yesilrenk);

}

void yenile(int, void*)
{
	if (a == 1) {
		goster();
	}
	else if (a == 0)destroyWindow("renk");
}

int main()
{
	namedWindow("Track", WINDOW_AUTOSIZE);
	createTrackbar("Trackbar", "Track", &a, 1, yenile);
	waitKey(0);
}

