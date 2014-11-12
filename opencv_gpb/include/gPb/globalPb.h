#include <iostream>
#include <vector>
#include <math.h>
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <opencv2/core/core.hpp>

namespace cv
{
void
CV_EXPORTS_W globalPb(const cv::Mat & image,
         cv::Mat & gPb,
         cv::Mat & gPb_thin,
         vector<cv::Mat> & gPb_ori);

void
CV_EXPORTS_W pb_parts_final_selected(vector<cv::Mat> & layers,
                        vector<vector<cv::Mat> > & gradients);

void
CV_EXPORTS_W MakeFilter(const int radii,
           const double theta,
           cv::Mat & kernel);

void
CV_EXPORTS_W multiscalePb(const cv::Mat & image,
             cv::Mat & mPb_max,
             vector<vector<cv::Mat> > & gradients);
}
