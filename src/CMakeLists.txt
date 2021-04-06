#set(HEADER_LIST "${template_demo_SOURCE_DIR}/include/template-demo/library.h")
file(GLOB HEADER_LIST CONFIGURE_DEPENDS "$template_demo_SOURCE_DIR/include/template_demo/*.h")

add_library(template_library library.c ${HEADER_LIST})
target_include_directories(template_library PUBLIC ../include)
target_compile_features(template_library PUBLIC c_std_11)

source_group(
        TREE "${PROJECT_SOURCE_DIR}/include"
        PREFIX "Header Files"
        FILES ${HEADER_LIST}
)
