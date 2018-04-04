#include <iostream>
// #include "../dlib/dnn.h"
// #include "../dlib/image_io.h"
// #include "../dlib/gui_widgets.h"
// #include "../dlib/image_processing.h"
#include <dlib/dnn.h>
#include <dlib/image_io.h>
#include <dlib/gui_widgets.h>
#include <dlib/image_processing.h>
#include <string>
#include <vector>
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <dlib/opencv.h>

#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>

//#include <io.h>

using namespace std;
using namespace dlib;

void loadImages(const string& folder_name, 
    std::vector<matrix<rgb_pixel> > & training_images,
    std::vector<unsigned long>& training_labels, 
    std::vector<array2d<rgb_pixel> > & testing_images,
    std::vector<unsigned long>& testing_labels);
int getdir (string dir, std::vector<string> &files);
void loadImageFileIntoDLibImages_one_dir(string folder, std::vector<matrix<rgb_pixel> >& dlib_images);



void loadImages(const string& folder_name, 
    
    std::vector<matrix<rgb_pixel> > & training_images,
    std::vector<unsigned long>& training_labels, 
    std::vector<array2d<rgb_pixel> > & testing_images,
    std::vector<unsigned long>& testing_labels) {

    std::vector<string> files = std::vector<string>();
    
    string train_positive_folder = folder_name + "/train/1";
    string train_negative_folder = folder_name + "/train/0";
    string test_positive_folder  = folder_name + "test/1";
    string test_negative_folder  = folder_name + "test/0";

    std::vector<string> train_positive_files = std::vector<string>();
    std::vector<string> train_negative_files = std::vector<string>();
    std::vector<string> test_positive_files = std::vector<string>();
    std::vector<string> test_negative_files = std::vector<string>();
    
    training_images = std::vector<matrix<rgb_pixel> >();
    loadImageFileIntoDLibImages_one_dir(train_positive_folder, training_images);

    cout << training_images.size() <<endl;

    // train_positive
    // getdir(train_positive_folder, train_positive_files);




    // for (int i=0; i<files.size(); i++) {
    //     //cout << files[i].c_str() <<endl;
    //     if (files[i].c_str() == "train") {
    //         std::vector<string> train_files = std::vector<string>();
    //         getdir("train", train_files);
            
    //     } else {cout << "cannot find \"train\" directory!" << endl;}

    // }
}

void loadImageFileIntoDLibImages_one_dir(string folder, std::vector<matrix<rgb_pixel> >& dlib_images) {

    std::vector<string> files = std::vector<string>();
    getdir(folder, files);

    dlib_images.resize(files.size());

    for(int i=0; i<files.size(); i++) {

        dlib::matrix<dlib::rgb_pixel> dlib_img;
        string filename = folder + "/" + files[i].c_str();
        
        try{
            
            cv::Mat cv_img = cv::imread(filename, CV_LOAD_IMAGE_COLOR);
            if (cv_img.empty()) {
                cout << "failed reading image!" << endl;
                continue;
            }
            dlib::cv_image<dlib::rgb_pixel> tmp_img(cv_img);
            dlib::assign_image(dlib_img, tmp_img);
            

            // load_image(img, filename);
            // dlib_images[i].sets_size(img.nr(), img.nc());
            cout << files[i].c_str() << dlib_img.size() << endl;
            // assign_all_pixels(dlib_images[i], img.data);
            dlib_images.push_back(dlib_img);
        }
        catch (exception& e)
        {
            cout << "exception thrown: " << e.what() << endl;
        }
    }

    cout << "size is " << dlib_images.size() << endl;



}

int getdir (string dir, std::vector<string> &files)
{
    DIR *dp;
    struct dirent *dirp;
    if((dp  = opendir(dir.c_str())) == NULL) {
        cout << "Error(" << errno << ") opening " << dir << endl;
        return errno;
    }

    while ((dirp = readdir(dp)) != NULL) {
        files.push_back(string(dirp->d_name));
    }
    closedir(dp);
    return 0;
}

int main() {

    string input_dir = "/home/zhida/Documents/Data/road_sign_original_data";
    // inputs
    std::vector<matrix<rgb_pixel> > training_images;
    std::vector<unsigned long>        training_labels;
    std::vector<array2d<rgb_pixel> > testing_images;
    std::vector<unsigned long>      testing_labels;

    loadImages(input_dir, training_images, training_labels, testing_images, testing_labels);

    return 0;
}
