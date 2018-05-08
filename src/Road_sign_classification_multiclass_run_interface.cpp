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

    // 加载标签类别
    std::string classes_list_filename = "../../executable/resource/classList.txt";
    std::vector<std::string> classes_list = get_classes_list(classes_list_filename);


    // 加载模型数据
    deserialize("../../executable/resource/road_sign_network_multiclass_0508.dat") >> net;

    // 预测
    std::vector<matrix<rgb_pixel> > dlib_imgs;
    dlib_imgs.push_back(dlib_img);
    std::vector<unsigned long> predicted_labels = net(dlib_imgs);

    // 将输出的unsigned long转化为类别名称
    string label_name = classes_list[predicted_labels[0] ];

    return label_name;

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


std::vector<std::string> get_classes_list(std::string filename){

    char buffer[256];
    ifstream in(filename);
    std::vector<std::string> classes_list;

    if(!in.is_open()) {

        cout << "Error opening the file! " << endl;
        return classes_list ;
    }

    
    while(!in.eof()) {

        in.getline(buffer, 100);
        //cout << buffer << endl;
        string one_class(buffer);
        classes_list.push_back(one_class);
    }
    in.close();

    return classes_list;
}
