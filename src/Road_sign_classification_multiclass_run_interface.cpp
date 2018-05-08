#include "../include/Road_sign_classification_multiclass_run_interface.h"




// -- interface -- 
// return the classification label of one input image
string classify_label(cv::Mat cv_img) {

    dlib::matrix<dlib::rgb_pixel> dlib_img;
    dlib_img = loadOneOpenCVImage(cv_img);


    // Lenet的网络结构，最后一层的15是输出类别数目
    using net_type = loss_multiclass_log<
                                fc<15,       
                                relu<fc<84,   
                                relu<fc<120,  
                                max_pool<2,2,2,2,relu<con<16,5,5,1,1,
                                max_pool<2,2,2,2,relu<con<6,5,5,1,1,
                                input<matrix<rgb_pixel>> 
                                >>>>>>>>>>>>;

    net_type net;
    net.clean();

    // 加载模型数据
    deserialize("road_sign_network_multiclass.dat") >> net;

    // 预测
    std::vector<matrix<rgb_pixel> > dlib_imgs;
    dlib_imgs.push_back(dlib_img);
    std::vector<unsigned long> predicted_labels = net(dlib_imgs);

    return to_string(predicted_labels[0]);

}

matrix<rgb_pixel> loadOneOpenCVImage(cv::Mat cv_img) {

    dlib::matrix<dlib::rgb_pixel> dlib_img; 

    try{
        if (cv_img.empty()) {
        
            cout << "the cv:Mat input is empty; Failed !!! " << endl;
            return dlib_img;
        }

    

        dlib::cv_image<dlib::rgb_pixel> tmp_img(cv_img);
        dlib::assign_image(dlib_img, tmp_img);

        return dlib_img;
    }
    catch (exception& e)
    {
        cout << "exception thrown: " << e.what() << endl;
        return dlib_img;
    }
    
}

