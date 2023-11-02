cmake_minimum_required(VERSION 3.26)

file(GLOB SRCS "src/*.cpp")
file(GLOB_RECURSE HDRS "include/*.h")

add_library(NutritionLib ${SRCS} ${HDRS})

target_include_directories(NutritionLib PUBLIC ${CMAKE_SOURCE_DIR}/Foundation/include/NutritionLib)
set(CMAKE_CXX_STANDARD 20)
add_subdirectory(Tests)