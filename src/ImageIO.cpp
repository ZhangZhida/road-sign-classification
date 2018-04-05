#include "../include/ImageIO.h"
#include "../include/FileOperation.h"

using namespace std;

void loadImages(const string& folder_name, 
    
    std::vector<matrix<rgb_pixel> > & training_images,
    std::vector<unsigned long>& training_labels, 
    std::vector<matrix<rgb_pixel> > & testing_images,
    std::vector<unsigned long>& testing_labels) {

    std::vector<string> files = std::vector<string>();
    
    string train_positive_folder = folder_name + "/train/1";
    string train_negative_folder = folder_name + "/train/0";
    string test_positive_folder  = folder_name + "/val/1";
    string test_negative_folder  = folder_name + "/val/0";

    std::vector<string> train_positive_files = std::vector<string>();
    std::vector<string> train_negative_files = std::vector<string>();
    std::vector<string> test_positive_files = std::vector<string>();
    std::vector<string> test_negative_files = std::vector<string>();
    
    training_images = std::vector<matrix<rgb_pixel> >();
    loadImageFileIntoDLibImages_one_dir(train_positive_folder, training_images, training_labels, 1);
    loadImageFileIntoDLibImages_one_dir(train_negative_folder, training_images, training_labels, 0);

    // image_window my_window1(training_images[0], "image 0");
    // my_window1.wait_until_closed();

    // image_window my_window2(training_images[10], "image 10");
    // my_window2.wait_until_closed();

    testing_images = std::vector<matrix<rgb_pixel> >();
    loadImageFileIntoDLibImages_one_dir(test_positive_folder, testing_images, testing_labels, 1);
    loadImageFileIntoDLibImages_one_dir(test_negative_folder, testing_images, testing_labels, 0);  

}

void loadImageFileIntoDLibImages_one_dir(string folder, std::vector<matrix<rgb_pixel> >& dlib_images,
     std::vector<unsigned long>& dlib_labels, unsigned long label) {

    std::vector<string> files = std::vector<string>();
    getdir(folder, files);


    for(int i=0; i<files.size(); i++) {

        dlib::matrix<dlib::rgb_pixel> dlib_img;
        string filename = folder + "/" + files[i].c_str();
        
        try{
            
            cv::Mat cv_img = cv::imread(filename, CV_LOAD_IMAGE_COLOR);
            if (cv_img.empty()) {
                //cout << "failed reading image! The file name is " << filename << endl;
                continue;
            }
            dlib::cv_image<dlib::rgb_pixel> tmp_img(cv_img);
            dlib::assign_image(dlib_img, tmp_img);
            

            // load_image(img, filename);
            // dlib_images[i].sets_size(img.nr(), img.nc());
            //cout << files[i].c_str() << dlib_img.size() << endl;
            // assign_all_pixels(dlib_images[i], img.data);
            dlib_images.push_back(dlib_img);
            dlib_labels.push_back(label);
        }
        catch (exception& e)
        {
            cout << "exception thrown: " << e.what() << endl;
        }
    }


    cout << "images size is " << dlib_images.size() << endl;
    cout << "labels size is " << dlib_labels.size() << endl;



}