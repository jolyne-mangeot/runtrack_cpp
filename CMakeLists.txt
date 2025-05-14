cmake_minimum_required(VERSION 3.31)
project(runtrack_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories("RNT jour 1/common")
include_directories("RNT jour 1/header")

add_executable(runtrack_cpp
        "RNT jour 1/common/utils.cpp"
        "RNT jour 1/common/utils.h"
        "RNT jour 1/header/Job 1.h"
        "RNT jour 1/source/Job 1.cpp"
        "RNT jour 1/common/aquatic.cpp"
        "RNT jour 1/common/aquatic.h"
        "RNT jour 1/common/terrestrial.cpp"
        "RNT jour 1/common/terrestrial.h"
        "RNT jour 1/source/penguin.cpp"
        "RNT jour 1/header/penguin.h"
)
