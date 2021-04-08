# This directory should contain the minimalist code required
# to start up the application. Functional code belongs in the
# 'src' directory, as that is able to be tested.
add_executable(${BINARY_NAME} main.c)
target_compile_features(${BINARY_NAME} PRIVATE c_std_11)
target_link_libraries(${BINARY_NAME} PRIVATE ${LIBRARY_NAME})