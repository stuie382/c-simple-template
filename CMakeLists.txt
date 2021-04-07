cmake_minimum_required(VERSION 3.17)
project(template_demo VERSION 1.0
        DESCRIPTION "Template starter for C projects"
        LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

enable_testing()

if (CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    set_property(GLOBAL PROPERTY USE_FOLDERS ON)
    include(CTest)
    find_package(Doxygen)
    if (Doxygen_FOUND)
        add_subdirectory(docs)
    else ()
        message(STATUS "Doxygen not found, not building docs")
    endif ()

    else()
    message(STATUS "Didn't equal project names")
endif ()

add_subdirectory(src)

add_subdirectory(app)

if ((CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME OR MODERN_CMAKE_BUILD_TESTING) AND BUILD_TESTING)
    add_subdirectory(tests)
endif ()
#
#add_library(template_demo_lib src/library.c include/template_demo/library.h)
#target_include_directories(template_demo_lib PUBLIC include)
#target_compile_features(template_demo_lib PUBLIC c_std_11)
#
#add_executable(template-demo app/main.c)
#target_link_libraries(template-demo PUBLIC template_demo_lib)