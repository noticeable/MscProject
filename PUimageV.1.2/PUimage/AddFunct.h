#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <stdlib.h>
#include <stdio.h>

using namespace cv;
using namespace std;

Mat rotate(Mat src, double angle);
void on_track_bar_slide(CvCapture* capture, int pos);