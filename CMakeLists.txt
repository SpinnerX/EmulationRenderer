cmake_minimum_required(VERSION 3.5.0)
project(EmulationRenderer VERSION 0.1.0 LANGUAGES C CXX)

include_directories(
    ${PROJECT_NAME}/include/EmulationRenderer
    ${PROJECT_NAME}/include/EmulationRenderer/include
)

set(LIB_NAME ${PROJECT_NAME})


add_library(
    ${PROJECT_NAME}
    ${PROJECT_NAME}/src/EmulationRenderer/core/EmulationRenderer.cpp
)
target_include_directories(${LIB_NAME} INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/${LIB_NAME}/include>
    # $<INSTALL_INTERFACE:include> # Optional if installing headers
)

# target_include_directories(${PROJECT_NAME} PUBLIC EmulationRenderer/include)
# target_compile_definitions(${PROJECT_NAME} PRIVATE cxx_std_20)
# install(TARGETS ${PROJECT_NAME})