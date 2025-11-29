cmake_minimum_required(VERSION 3.30)
project(vector_x C)

set(CMAKE_C_STANDARD 11)

add_executable(vector_x
        include/vectorx.h
        src/vectorx.c
        src/main.c
)
