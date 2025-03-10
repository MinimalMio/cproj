cmake_minimum_required(VERSION 3.20)
project(cproj VERSION 1.0
        DESCRIPTION "A C++ Project Builder"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(${PROJECT_NAME}
    src/main.cc
    src/cfgparser.cc
)

target_include_directories(${PROJECT_NAME} PUBLIC
    src/include
)

install(TARGETS ${PROJECT_NAME}
    RUNTIME DESTINATION bin
    COMPONENT runtime
)