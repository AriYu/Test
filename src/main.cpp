#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

int main(int argc, char *argv[])
{
  int grayscaled = 1;
  cv::Mat src_img 
	= cv::imread("../resource/lenna.png", grayscaled);
  if(!src_img.data) return 1;

  cv::namedWindow("src image",
				  CV_WINDOW_AUTOSIZE | CV_WINDOW_FREERATIO);
  cv::imshow("src image", src_img);
  cv::waitKey(0);
  return 0;
}
