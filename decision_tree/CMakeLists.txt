cmake_minimum_required(VERSION 2.8) 
project(decision_tree)

set(CMAKE_CXX_STANDARD 11)
find_package(OpenCV REQUIRED)
# set compilation

set(SOURCE_FILES main.cpp dtreeTrain.cpp dtreeTrain.h OriginData.cpp OriginData.h tools.h tools.cpp dtreeDecision.h dtreeDecision.cpp)
add_executable(decision_tree ${SOURCE_FILES})
TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${OpenCV_LIBS})