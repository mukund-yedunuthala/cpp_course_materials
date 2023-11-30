cmake_minimum_required(VERSION 3.27)
project(CPP_TUTORIALS VERSION 1.0)
# INCLUDE
include_directories("${PROJECT_SOURCE_DIR}/include")
add_subdirectory(${PROJECT_SOURCE_DIR}/include)
add_subdirectory(${PROJECT_SOURCE_DIR}/src)

add_executable(tutorial_cassert ${PROJECT_SOURCE_DIR}/tutorials/tutorial_cassert.cxx)
target_link_libraries(tutorial_cassert MySqrt)
add_executable(tutorial_stl_basics_io ${PROJECT_SOURCE_DIR}/tutorials/tutorial_stl_basics_io.cxx)
add_executable(tutorial_vector ${PROJECT_SOURCE_DIR}/tutorials/tutorial_vector.cxx)
add_executable(tutorial_structs_classes ${PROJECT_SOURCE_DIR}/tutorials/tutorial_structs.cxx)
target_link_libraries(tutorial_structs_classes Point2DSpherical)
add_executable(example_struct_bookdb ${PROJECT_SOURCE_DIR}/examples/example_struct_bookdb.cxx)