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
//#include <io.h>

using namespace std;
using namespace dlib;

void loadImages(const string& folder_name, 
    std::vector<array2d<rgb_pixel> > & training_images,
    std::vector<unsigned long>& training_labels, 
    std::vector<array2d<rgb_pixel> > & testing_images,
    std::vector<unsigned long>& testing_labels);
int getdir (string dir, std::vector<string> &files);



void loadImages(const string& folder_name, 
    std::vector<array2d<rgb_pixel> > & training_images,
    std::vector<unsigned long>& training_labels, 
    std::vector<array2d<rgb_pixel> > & testing_images,
    std::vector<unsigned long>& testing_labels) {

    std::vector<string> files = std::vector<string>();
    getdir(folder_name, files);

    for (int i=0; i<files.size(); i++) {
        cout << files[i].c_str() <<endl;
    }
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
    std::vector<array2d<rgb_pixel> > training_images;
    std::vector<unsigned long>         training_labels;
    std::vector<array2d<rgb_pixel> > testing_images;
    std::vector<unsigned long>         testing_labels;

    loadImages(input_dir, training_images, training_labels, testing_images, testing_labels);

    return 0;
}
