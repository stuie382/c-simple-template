set(PROJECT_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/include")
# Add all header files to this set
set(HEADER_LIST
        "${PROJECT_INCLUDE_DIR}/template_demo/library.h"
        )

# Add all source files to this set
set(SOURCE_FILES
        library.c
        )

# Add the source and header sets to the library
add_library(${LIBRARY_NAME} ${SOURCE_FILES} ${HEADER_LIST})
target_include_directories(${LIBRARY_NAME} PUBLIC ${PROJECT_INCLUDE_DIR})
target_compile_features(${LIBRARY_NAME} PUBLIC c_std_11)
