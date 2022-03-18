
cmake_minimum_required(VERSION 3.0.0)
project(calculator_project VERSION 1.0.0)

add_library(mymath
addition.cpp
division.cpp
)

add_library(myprint
print.cpp
)


add_executable(calculator
main.cpp
)

target_link_libraries(calculator myprint mymath)
