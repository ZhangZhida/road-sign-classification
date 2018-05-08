
#include <string>
#include <vector>
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>

#include <dlib/opencv.h>
#include <dlib/dnn.h>
#include <dlib/image_io.h>
#include <dlib/gui_widgets.h>
#include <dlib/image_processing.h>


#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>

#include <iostream>
#include <fstream>  
#include <stdlib.h> 

using namespace std;
using namespace dlib;


std::string classify_label(cv::Mat cv_img);

dlib::matrix<dlib::rgb_pixel> loadOneOpenCVImage(cv::Mat cv_img);

std::vector<string> read_classes_list(string filename);