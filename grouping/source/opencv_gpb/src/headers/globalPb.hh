#include <iostream>
#include <vector>
#include <math.h>
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <opencv2/core/core.hpp>

namespace cv
{
  void 
  globalPb(const cv::Mat & image,
	   cv::Mat & gPb,
	   cv::Mat & gPb_thin,
	   vector<cv::Mat> & gPb_ori);


  void
  pb_parts_final_selected(vector<cv::Mat> & layers,
			  cv::Mat & texton,
			  vector<cv::Mat> & bg_r3,
			  vector<cv::Mat> & bg_r5,
			  vector<cv::Mat> & bg_r10,
			  vector<cv::Mat> & cga_r5,
			  vector<cv::Mat> & cga_r10,
			  vector<cv::Mat> & cga_r20,
			  vector<cv::Mat> & cgb_r5,
			  vector<cv::Mat> & cgb_r10,
			  vector<cv::Mat> & cgb_r20,
			  vector<cv::Mat> & tg_r5,
			  vector<cv::Mat> & tg_r10,
			  vector<cv::Mat> & tg_r20);

  void 
  MakeFilter(const int radii,
	     const double theta,
	     cv::Mat & kernel);
  
  void
  multiscalePb(const cv::Mat & image,
	       cv::Mat & mPb_max,
	       vector<cv::Mat> & mPb_all,
	       vector<cv::Mat> & bg_r3,
	       vector<cv::Mat> & bg_r5,
	       vector<cv::Mat> & bg_r10,
	       vector<cv::Mat> & cga_r5,
	       vector<cv::Mat> & cga_r10,
	       vector<cv::Mat> & cga_r20,
	       vector<cv::Mat> & cgb_r5,
	       vector<cv::Mat> & cgb_r10,
	       vector<cv::Mat> & cgb_r20,
	       vector<cv::Mat> & tg_r5,
	       vector<cv::Mat> & tg_r10,
	       vector<cv::Mat> & tg_r20);
   
}
