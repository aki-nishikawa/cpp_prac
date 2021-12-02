### define cmake minimum version
cmake_minimum_required(VERSION 2.8)

### define project name
project( OpenCV_practice)

### find OpenCV package
find_package( OpenCV REQUIRED )

### define include directory
include_directories(
${OpenCV_INCLUDE_DIRS}
${PROJECT_SOURCE_DIR}/include
)

### define output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ./bin)

########## build executable file ##########
### for displayImage
add_executable( displayImage src/displayImage.cpp)
target_link_libraries( displayImage ${OpenCV_LIBS} )

### for realtimeCamera
add_executable( realtimeCamera src/realtimeCamera.cpp)
target_link_libraries( realtimeCamera ${OpenCV_LIBS} )

### for realtimeBlurCamera
add_executable( realtimeBlurCamera src/realtimeBlurCamera.cpp)
target_link_libraries( realtimeBlurCamera ${OpenCV_LIBS} )

### for detectFace
add_executable( detectFace src/detectFace.cpp)
target_link_libraries( detectFace ${OpenCV_LIBS} )
