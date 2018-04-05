add_library(FileOperation SHARED FileOperation.cpp)
target_link_libraries(FileOperation dlib::dlib ${OpenCV_LIBS})

add_library(ImageIO SHARED ImageIO.cpp)
target_link_libraries(ImageIO FileOperation dlib::dlib ${OpenCV_LIBS})

