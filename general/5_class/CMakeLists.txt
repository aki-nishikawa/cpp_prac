### define cmake minimum version
cmake_minimum_required(VERSION 2.8)

### define project name
project( Lab_Class CXX )

### define include directory
include_directories(
    ${PROJECT_SOURCE_DIR}/include
)

### define output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ./bin)

########## build executable file ##########
add_executable( program
    main.cpp
    src/human.cpp
    src/student.cpp
    src/lab.cpp
)