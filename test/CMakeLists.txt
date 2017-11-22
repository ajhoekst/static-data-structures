cmake_minimum_required( VERSION 3.4 )
project( sds_test )

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories( ${sds_SOURCE_DIR}/include )

add_executable( sds main.cpp )
