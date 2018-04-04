cmake_minimum_required(VERSION 2.8.12)
# Every project needs a name.  We call this the "examples" project.
project(executable)

add_subdirectory(../dlib dlib_build)


add_executable(road_sign_classification road_sign_classification.cpp)
target_link_libraries(road_sign_classification dlib::dlib )



