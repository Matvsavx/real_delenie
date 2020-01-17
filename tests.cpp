#include "gtest/gtest.h"
#include "lib.h"

TEST(aray_sum, expected_array_sum) {
    EXPECT_EQ(delenie("8","4"), 2);
    EXPECT_EQ(delenie("16","4"), 4);
    EXPECT_EQ(delenie("0","4"), 0);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
