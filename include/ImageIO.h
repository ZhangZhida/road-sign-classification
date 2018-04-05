#include <string>
#include <vector>
#include <dlib/dnn.h>
#include <dlib/image_io.h>
#include <dlib/gui_widgets.h>
#include <dlib/image_processing.h>
#include <dlib/opencv.h>

#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace dlib;


void loadImages(const string& folder_name, 
    std::vector<matrix<rgb_pixel> > & training_images,
    std::vector<unsigned long>& training_labels, 
    std::vector<matrix<rgb_pixel> > & testing_images,
    std::vector<unsigned long>& testing_labels);
// int getdir (string dir, std::vector<string> &files);
void loadImageFileIntoDLibImages_one_dir(string folder, std::vector<matrix<rgb_pixel> >& dlib_images, 
    std::vector<unsigned long>& dlib_labels, unsigned long label);