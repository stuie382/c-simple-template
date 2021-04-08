/**
 * Add your test code here.
 */
#include "gtest/gtest.h"

extern "C" {
/**
 * The header for the unit under test should go in this
 * extern C block, as well as any other C file headers
 * that are required.
 */
#include "template_demo/library.h"
}

class DemoTest : public testing::Test {

    void SetUp() override {
        // Do setup
    }

    void TearDown() override {
        // Do teardown
    }

public:

};

TEST_F(DemoTest, say_hello_test) {
    EXPECT_EQ("Hello, World!", "Hello, World!");
}