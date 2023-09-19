cmake_minimum_required(VERSION 3.5.0)
project(EmulationRenderer VERSION 0.1.0 LANGUAGES C CXX)

# target_sources(EmulationRenderer
#     PRIVATE EmulationRenderer/src/EmulationRenderer/core/EmulationRenderer.cpp
#     public FILE_SET
#     BASE_DIRS ${PROJECT_SOURCE_DIR}
#     FILES EmulationRenderer/include/EmulationRenderer/core/EmulationRenderer.h
# )

include_directories(
    ${PROJECT_NAME}/include
    ${PROJECT_NAME}/include/${PROJECT_NAME}
)

set(
    SRC
    "EmulationRenderer/src/EmulationRenderer/core/EmulationRenderer.cpp"
)

add_library(EmulationRenderer ${SRC})

target_include_directories(${PROJECT_NAME} PRIVATE "${PROJECT_SOURCE_DIR}")

install(TARGETS ${PROJECT_NAME} 
    EXPORT EmulationRendererTargets
    FILE_SET HEADERS
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin
    INCLUDES DESTINATION EmulationRenderer/include/EmulationRenderer
)

set(INCLUDE_INSTALL_DIR include/)

include(CMakePackageConfigHelpers)
write_basic_package_version_file(
    "EmulationRendererConfigVersion.cmake"
    VERSION ${geo_VERSION}
    COMPATIBILITY AnyNewerVersion)

install(EXPORT EmulationRendererTargets
    FILE EmulationRendererTargets.cmake
    NAMESPACE EmulationRenderer::
    DESTINATION lib/cmake/EmulationRenderer)

install(FILES "EmulationRendererConfig.cmake" "${CMAKE_CURRENT_BINARY_DIR}/cmake/EmulationRendererConfigVersion.cmake"
    DESTINATION lib/cmake/EmulationRenderer)
