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

// #include <opencv2/opencv.hpp>
// #include <opencv2/imgproc/imgproc.hpp>
// #include <opencv2/objdetect/objdetect.hpp>
// #include <opencv2/highgui/highgui.hpp>

#include "../include/FileOperation.h"
#include "../include/ImageIO.h"

//#include <io.h>

using namespace std;
using namespace dlib;

int main() {

    // string input_dir = "/home/zhida/Documents/Data/road_sign_original_data";
    // // inputs
    // std::vector<matrix<rgb_pixel> > training_images;
    // std::vector<std::string>        training_labels;
    // std::vector<matrix<rgb_pixel> > testing_images;
    // std::vector<std::string>      testing_labels;

    // loadImages(input_dir, training_images, training_labels, testing_images, testing_labels);

    // cout << "training labels:" << endl;
    // for (int i=0; i<training_labels.size(); i++) {
        
    //     cout << training_labels[i] << ",";
    // }
    // cout << endl;

    // // cout << training_images.size() << endl;
    // // cout << training_labels.size() << endl;

    // // define net

    // // best !!!
    // using net_type = loss_multiclass_log<
    //                             fc<2,       
    //                             relu<fc<84,   
    //                             relu<fc<120,  
    //                             max_pool<2,2,2,2,relu<con<16,5,5,1,1,
    //                             max_pool<2,2,2,2,relu<con<6,5,5,1,1,
    //                             input<matrix<rgb_pixel>> 
    //                             >>>>>>>>>>>>;

    // // using net_type = loss_multiclass_log<
    // //                             fc<2,       
    // //                             relu<fc<84,   
    // //                             relu<fc<120, 
    // //                             max_pool<2,2,2,2,relu<con<28,5,5,1,1,
    // //                             max_pool<2,2,2,2,relu<con<6,5,5,1,1,
    // //                             input<matrix<rgb_pixel>> 
    // //                             >>>>>>>>>>>>;

    // // using net_type = loss_multiclass_log<
    // //                             fc<2,       
    // //                             relu<fc<42, 
    // //                             relu<fc<60,
    // //                             max_pool<2,2,2,2,relu<con<16,5,5,1,1,
    // //                             max_pool<2,2,2,2,relu<con<6,5,5,1,1,
    // //                             input<matrix<rgb_pixel>> 
    // //                             >>>>>>>>>>>>;

    // // using net_type = loss_multiclass_log<
    // //                             fc<2,  
    // //                             relu<fc<300,
    // //                             max_pool<2,2,2,2,con<250,4,4,1,1,  
    // //                             max_pool<2,2,2,2,con<150,4,4,1,1,
    // //                             max_pool<2,2,2,2,con<100,7,7,1,1,
    // //                             input<matrix<rgb_pixel>> 
    // //                             >>>>>>>>>>;

    // net_type net;
    
    // dnn_trainer<net_type> trainer(net);
    // trainer.set_learning_rate(0.001);
    // trainer.set_min_learning_rate(0.00001);
    // trainer.set_mini_batch_size(256);
    // // trainer.set_mini_batch_size(512);
    // trainer.be_verbose();

    // // save intermediate results
    // trainer.set_synchronization_file("road_sign_sync", std::chrono::seconds(20));

    // // train
    // trainer.train(training_images, training_labels);

    // // 
    // net.clean();
    // serialize("road_sign_network.dat") << net;

    // // train and test results

    // std::vector<unsigned long> predicted_labels = net(training_images);
    // int num_right = 0;
    // int num_wrong = 0;
    // // And then let's see if it classified them correctly.
    //  cout << "predicted_labels:" << endl;
    // for (size_t i = 0; i < training_images.size(); ++i)
    // {
    //     cout << predicted_labels[i] << ",";
    //     if (predicted_labels[i] == training_labels[i])
    //         ++num_right;
    //     else {
    //         // string name = "" + training_labels[i];
    //         // image_window my_window2(training_images[i], name);
    //         // my_window2.wait_until_closed();
    //         ++num_wrong;
    //     }
        
    // }
    // cout << "training num_right: " << num_right << endl;
    // cout << "training num_wrong: " << num_wrong << endl;
    // cout << "training accuracy:  " << num_right/(double)(num_right+num_wrong) << endl;

    // // Let's also see if the network can correctly classify the testing images.  Since
    // // MNIST is an easy dataset, we should see at least 99% accuracy.
    // predicted_labels = net(testing_images);
    // num_right = 0;
    // num_wrong = 0;
    // for (size_t i = 0; i < testing_images.size(); ++i)
    // {
    //     if (predicted_labels[i] == testing_labels[i])
    //         ++num_right;
    //     else
    //         ++num_wrong;
        
    // }
    // cout << "testing num_right: " << num_right << endl;
    // cout << "testing num_wrong: " << num_wrong << endl;
    // cout << "testing accuracy:  " << num_right/(double)(num_right+num_wrong) << endl;


    // // output to xml
    // net_to_xml(net, "lenet2.xml");

    return 0;
}
