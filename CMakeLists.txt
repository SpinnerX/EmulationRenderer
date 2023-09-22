cmake_minimum_required(VERSION 3.5.0)
project(EmulationRenderer VERSION 0.1.0 LANGUAGES C CXX)

# target_sources(EmulationRenderer
#     PRIVATE EmulationRenderer/src/EmulationRenderer/core/EmulationRenderer.cpp
#     public FILE_SET
#     BASE_DIRS ${PROJECT_SOURCE_DIR}
#     FILES EmulationRenderer/include/EmulationRenderer/core/EmulationRenderer.h
# )

# include_directories(
#     ${PROJECT_NAME}/include
#     ${PROJECT_NAME}/include/${PROJECT_NAME}
# )

set(CMAKE_CXX_STANDARD 20)

include_directories(
    include/${PROJECT_NAME}
)

set(
    HEADERS
    ${PROJECT_SOURCE_DIR}/include/EmulationRenderer/common/WindowUtils.h
    ${PROJECT_SOURCE_DIR}/include/EmulationRenderer/core/Window.h
)

set(
    SRC
    # ${PROJECT_NAME}/src/${PROJECT_NAME}/core/EmulationRenderer.cpp
    src/${PROJECT_NAME}/core/Window.cpp
)


add_library(
    ${PROJECT_NAME}
    ${HEADERS}
    ${SRC}
)
add_library(EmRen::EmRen ALIAS ${PROJECT_NAME})

target_include_directories(
    ${PROJECT_NAME}
    INTERFACE
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/include/EmulationRenderer/
)

# target_sources(
#     sources_files
#     PRIVATE
#     "EmulationRenderer/src/EmulationRenderer/core/EmulationRenderer.cpp"
# )

# target_include_directories(${PROJECT_NAME} PRIVATE "${PROJECT_SOURCE_DIR}")

# install(TARGETS ${PROJECT_NAME}
#     EXPORT EmulationRendererTargets
#     FILE_SET HEADERS
#     LIBRARY DESTINATION lib
#     ARCHIVE DESTINATION lib
#     RUNTIME DESTINATION bin
#     INCLUDES DESTINATION EmulationRenderer/include/EmulationRenderer
# )

# set(INCLUDE_INSTALL_DIR include/)

# include(CMakePackageConfigHelpers)
# write_basic_package_version_file(
#     "EmulationRendererConfigVersion.cmake"
#     VERSION ${geo_VERSION}
#     COMPATIBILITY AnyNewerVersion)

# install(EXPORT EmulationRendererTargets
#     FILE EmulationRendererTargets.cmake
#     NAMESPACE EmulationRenderer::
#     DESTINATION lib/cmake/EmulationRenderer)

# install(FILES "EmulationRendererConfig.cmake" "${CMAKE_CURRENT_BINARY_DIR}/cmake/EmulationRendererConfigVersion.cmake"
#     DESTINATION lib/cmake/EmulationRenderer)
include(${PROJECT_SOURCE_DIR}/cmake/glfw.cmake)
include(${PROJECT_SOURCE_DIR}/cmake/ffmpeg.cmake)