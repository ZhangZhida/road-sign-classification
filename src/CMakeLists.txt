add_library(FileOperation SHARED FileOperation.cpp)
target_link_libraries(FileOperation dlib::dlib ${OpenCV_LIBS})

