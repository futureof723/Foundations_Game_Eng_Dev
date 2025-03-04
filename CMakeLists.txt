cmake_minimum_required(VERSION 3.30)
project(Foundations_Game_Eng_Dev)

set(CMAKE_CXX_STANDARD 20)

add_executable(Foundations_Game_Eng_Dev main.cpp
        library/Vectors.cpp
        library/Vectors.h
)
