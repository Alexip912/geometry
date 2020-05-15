cmake_minimum_required(VERSION 3.10)
project(geometry)

set(CMAKE_CXX_STANDARD 14)

include_directories(./test)
include_directories(./thirdparty)
include_directories(./src)

add_executable(geometry src/main.c src/fname.h src/fname.c src/area.h src/area.c src/perimeter.h src/perimeter.c src/crossing.h src/crossing.c test/tests.c)