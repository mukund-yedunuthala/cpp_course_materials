cmake_minimum_required(VERSION 3.27)
project(CPP_TUTORIALS VERSION 1.0)
# INCLUDE
include_directories("${PROJECT_SOURCE_DIR}/include")
add_subdirectory(${PROJECT_SOURCE_DIR}/include)
set (EXTRA_LIBS ${EXTRA_LIBS} MySqrt)

add_subdirectory(${PROJECT_SOURCE_DIR}/src)
add_executable(tutorial_cassert ${PROJECT_SOURCE_DIR}/src/tutorial_cassert.cxx)
target_link_libraries(tutorial_cassert ${EXTRA_LIBS})