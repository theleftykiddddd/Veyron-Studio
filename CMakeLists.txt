cmake_minimum_required(VERSION 3.25)
project(veyron-studio VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Geode REQUIRED)

add_geode_mod(veyron-studio
    src/main.cpp
    src/core/StudioManager.cpp
    src/core/ProjectManager.cpp
    src/core/LevelData.cpp
    src/core/LevelParser.cpp
    src/analyzer/LevelAnalyzer.cpp
    src/analyzer/Diagnostics.cpp
    src/performance/FPSProfiler.cpp
    src/frames/FrameAnalyzer.cpp
    src/ids/ColorManager.cpp
    src/ids/GroupManager.cpp
    src/version/SnapshotManager.cpp
    src/visualizer/StructureVisualizer.cpp
    src/ui/StudioLayer.cpp
)

target_include_directories(veyron-studio PRIVATE include)
