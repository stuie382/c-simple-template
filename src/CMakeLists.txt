set(HEADER_LIST "${PROJECT_SOURCE_DIR}/include/template_demo/library.h")

add_library(template_library library.c ${HEADER_LIST})
target_include_directories(template_library PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_compile_features(template_library PUBLIC c_std_11)

source_group(
        TREE "${PROJECT_SOURCE_DIR}/include"
        PREFIX "Header Files"
        FILES ${HEADER_LIST}
)
