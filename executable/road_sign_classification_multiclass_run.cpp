#include "../include/Road_sign_classification_multiclass_run_interface.h"


using namespace std;

int main() {

    string filename = "/home/zhida/Documents/Data/road_sign_original_data_full/train/speed_zuigao_100/37.jpg";
    cv::Mat cv_img = cv::imread(filename, CV_LOAD_IMAGE_COLOR);

    string label = classify_label(cv_img);

    cout << label << endl;

    return 0;
}