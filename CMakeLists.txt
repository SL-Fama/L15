cmake_minimum_required(VERSION 3.16)

project(MathOperations CXX)

#Set C++ standard and options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#Add subdirectory for math library
add_subdirectory(math/src/dynamic)
add_subdirectory(math/src/static)

#Crete executable
add_executable(${PROJECT_NAME} main.cpp)

#Link math library to the executable
target_link_libraries(${PROJECT_NAME} 
    SMath::EasyMath
    dmath)