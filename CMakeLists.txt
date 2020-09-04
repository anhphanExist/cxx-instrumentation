cmake_minimum_required(VERSION 3.16)
project(cxx_sample_calculator)

# set filters: please do NOT use line breaks WITHIN the string!
#set(VT_INST_FILE_FILTER
#        "stl,usr/include")
#set(VT_INST_FUNC_FILTER
#        "vector,Vector")

# modify our flagsth
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -finstrument-functions")
#set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -finstrument-functions-exclude-file-list=${VT_INST_FILE_FILTER}")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -finstrument-functions-exclude-function-list=${VT_INST_FUNC_FILTER}")

SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -rdynamic")

set(CMAKE_CXX_STANDARD 14)

if (WIN32)
    find_package(dlfcn-win32 REQUIRED)
    set(CMAKE_DL_LIBS dlfcn-win32::dl)
endif ()

include_directories(.)

add_executable(cxx_sample_calculator
        Calculator.cpp
        Calculator.h
        main.cpp
        Menu.cpp
        Menu.h)
target_link_libraries(cxx_sample_calculator ${catkin_LIBRARIES} ${CMAKE_DL_LIBS})
