include(AddGoogleTest)
# Add all your test files to this set
set(TEST_FILES
        test_template_demo.cpp
        )

# Add the test files
add_executable(${TEST_BINARY_NAME} ${TEST_FILES})
target_link_libraries(${TEST_BINARY_NAME} PRIVATE ${LIBRARY_NAME})
add_gtest(${TEST_BINARY_NAME})