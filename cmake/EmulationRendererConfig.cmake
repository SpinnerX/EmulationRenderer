# cmake_minimum_required(VERSION 3.15)
# project(EmulationRenderer CXX)
# set(version 1.0.0)

# set(LIB_DIR ${PROJECT_NAME})

# # Installing and exporting targets
# install(FILES EmulationRenderer.h DESTINATION EmulationRenderer/include)

# install(TARGETS ${PROJECT_NAME} emulationrenderer-gen
#         DESTINATION lib/emulationrenderer EXPORT emulationrenderer-targets)

# install(EXPORT emulationrenderer-targets DESTINATION lib/emulationrenderer)

# set(
#     SRC
#     ${LIB_DIR}/src/EmulationRenderer.cpp
# )

include(CMakeFindDependencyMacro)
# find_dependency(xx 2.0)
include(${CMAKE_CURRENT_LIST_DIR}/EmulationRendererTargets.cmake)