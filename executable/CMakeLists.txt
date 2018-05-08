cmake_minimum_required(VERSION 2.8.12)
# Every project needs a name.  We call this the "examples" project.
project(executable)

# OpenCV support
#set(CMAKE_PREFIX_PATH "/home/zhida/Downloads/OpenCV/build")
#   find_package(OpenCV 3.2.0 REQUIRED)

#include directory
#include_directories("../../include")


add_executable(road_sign_classification road_sign_classification.cpp)
target_link_libraries(road_sign_classification FileOperation ImageIO dlib::dlib ${OpenCV_LIBS})

add_executable(road_sign_classification_multiclass road_sign_classification_multiclass.cpp)
target_link_libraries(road_sign_classification_multiclass FileOperation ImageIO dlib::dlib ${OpenCV_LIBS})

add_executable(dnn_introduction_ex dnn_introduction_ex.cpp)
target_link_libraries(dnn_introduction_ex dlib::dlib ${OpenCV_LIBS})

add_executable(dnn_mmod_find_cars2_ex dnn_mmod_find_cars2_ex.cpp)
target_link_libraries(dnn_mmod_find_cars2_ex dlib::dlib)

add_executable(dnn_mmod_find_cars_ex dnn_mmod_find_cars_ex.cpp)
target_link_libraries(dnn_mmod_find_cars_ex dlib::dlib)

add_executable(dnn_mmod_train_find_cars_ex dnn_mmod_train_find_cars_ex.cpp)
target_link_libraries(dnn_mmod_train_find_cars_ex dlib::dlib)

add_executable(road_sign_classification_multiclass_run road_sign_classification_multiclass_run.cpp)
target_link_libraries(road_sign_classification_multiclass_run Road_sign_classification_multiclass_run_interface dlib::dlib)


