cmake_minimum_required(VERSION 3.22)
project(forsurgo)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(libs/sst-plugininfra)

add_executable(${PROJECT_NAME}
	src/main.cpp
        )
target_link_libraries(${PROJECT_NAME} PUBLIC sst-plugininfra)
