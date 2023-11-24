cmake_minimum_required(VERSION 3.16.3)
project(cpptest)

set(CMAKE_CXX_STANDARD 17)

# turbobase64
find_package(turbobase64 REQUIRED)

include_directories(${turbobase64_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} libbase64.a)