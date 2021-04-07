add_executable(app main.c)
target_compile_features(app PRIVATE c_std_11)
target_link_libraries(app PRIVATE template_library)