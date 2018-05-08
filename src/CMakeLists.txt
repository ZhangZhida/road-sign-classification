add_library(FileOperation SHARED FileOperation.cpp)
target_link_libraries(FileOperation dlib::dlib ${OpenCV_LIBS})

add_library(ImageIO SHARED ImageIO.cpp)
target_link_libraries(ImageIO FileOperation dlib::dlib ${OpenCV_LIBS})

add_library(Road_sign_classification_multiclass_run_interface SHARED Road_sign_classification_multiclass_run_interface.cpp)
target_link_libraries(Road_sign_classification_multiclass_run_interface FileOperation dlib::dlib ${OpenCV_LIBS})

