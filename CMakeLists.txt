cmake_minimum_required(VERSION 3.17)
project(Test_allegro)

set(CMAKE_CXX_STANDARD 14)

add_executable(Test_allegro main.cpp)

target_link_libraries(Test_allegro -lmingw32 -lallegro-5.0.10-monolith-md-debug)