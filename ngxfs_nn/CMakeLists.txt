cmake_minimum_required(VERSION 3.10)

project(ngxfs_nn LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CAMKE_CXX_FLAGS} -std=c++11 -lpthread -lm")
set(CMAKE_EXE_LINKER_FLAGS "-lpthread -lm")
set(CMAKE_C_FLAGS "-std=c++11 -Wall -Wpointer-arith -fPIC")


FIND_PACKAGE(Threads REQUIRED)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

include_directories(_include app logic misc net proc signal)
aux_source_directory(app NGINX)
aux_source_directory(logic NGINX)
aux_source_directory(misc NGINX)
aux_source_directory(net NGINX)
aux_source_directory(proc NGINX)
aux_source_directory(signal NGINX)

add_executable(ngxfs_nn ${NGINX})
