CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

#project(final)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

#ADD_EXECUTABLE(test
#   unit_test.cpp
#) 

ADD_EXECUTABLE(test
    tests/unit_test.cpp
) 

ADD_EXECUTABLE(create
   src/main.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
