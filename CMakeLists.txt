cmake_minimum_required(VERSION 3.5.0)
project(EmulationRenderer VERSION 0.1.0 LANGUAGES C CXX)

# set(LIB_DIR ${PROJECT_NAME})

# set(
#     SRC
# )

include_directories(
    ${PROJECT_NAME}/include/EmulationRenderer
    ${PROJECT_NAME}/include/EmulationRenderer/include
)

# configure_file(
#     ${PROJECT_SOURCE_DIR}/cmake/EmulationRenderer.cmake
# )

add_library(
    ${PROJECT_NAME}
    ${PROJECT_NAME}/src/EmulationRenderer/core/EmulationRenderer.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC EmulationRenderer/include)
target_compile_definitions(${PROJECT_NAME} PRIVATE cxx_std_20)
install(TARGETS ${PROJECT_NAME})