cmake_minimum_required(VERSION 3.5.0)
project(EmulationRenderer VERSION 0.1.0 LANGUAGES C CXX)

set(LIB_DIR ${PROJECT_NAME})

set(
    SRC
)

add_library(
    ${PROJECT_NAME}
    ${LIB_DIR}/src/EmulationRenderer.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC EmulationRenderer/include)
target_compile_definitions(${PROJECT_NAME} PRIVATE cxx_std_20)
install(TARGETS ${PROJECT_NAME})