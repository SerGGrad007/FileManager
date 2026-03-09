#include <gtest/gtest.h>
#include "sum.h"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
    EXPECT_EQ(sum(6, 7), 13);
    EXPECT_EQ(sum(0, 0), 0);
    EXPECT_EQ(sum(6, -6), 0);
}

TEST(HelloTest, Basic) {
    EXPECT_EQ(sum(6, 7), 13);
}