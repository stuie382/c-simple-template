cmake_minimum_required(VERSION 3.17)

# Set the project name to something appropriate.
# This will propagate through the project, and all built artifacts
# will include the project name as the name root.
set(PROJECT_NAME "CHANGE-ME")
project(${PROJECT_NAME} VERSION 1.0
        DESCRIPTION "Template starter for C projects - UPDATE-ME"
        LANGUAGES C CXX)

# Set these variables based off the project name set above.
# These are used across the different CMakeLists files, so
# defining them in this root file provides consistency.
set(BINARY_NAME "${PROJECT_NAME}_app")
set(LIBRARY_NAME "${PROJECT_NAME}_library")
set(TEST_BINARY_NAME "${PROJECT_NAME}_test")

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

enable_testing()

add_subdirectory(src)
add_subdirectory(app)

if (CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    set_property(GLOBAL PROPERTY USE_FOLDERS ON)
    include(CTest)
    find_package(Doxygen)
    if (Doxygen_FOUND)
        add_subdirectory(docs)
    else ()
        message(STATUS "Doxygen not found, not building docs")
    endif ()

    if (BUILD_TESTING)
        add_subdirectory(tests)
    else ()
        message(STATUS "Build testing not enabled.")
    endif ()

else ()
    message(STATUS "Didn't equal project names")
endif ()

source_group(
        TREE "${PROJECT_SOURCE_DIR}/include"
        PREFIX "Header Files"
        FILES ${HEADER_LIST}
)

source_group(
        TREE "${PROJECT_SOURCE_DIR}/src"
        PREFIX "Source Files"
        FILES ${SOURCE_FILES}
)
