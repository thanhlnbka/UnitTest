#include "gtest/gtest.h"
#include "my_code.h"

TEST(MyCodeTest, TestAdd) {
    EXPECT_EQ(add(1, 2), 3);
    EXPECT_EQ(add(0, 0), 0);
    EXPECT_EQ(add(-1, 1), 0);
}

TEST(MyCodeTest, TestIsEven) {
    EXPECT_TRUE(is_even(2));
    EXPECT_TRUE(is_even(0));
    EXPECT_FALSE(is_even(3));
    EXPECT_FALSE(is_even(-1));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}