/*
 * Unit tests main file
 */

#include "gtest/gtest.h"
#include <iostream>

TEST(PlatformTest, TestPointerSize)
{
    //Check pointer size is 32 bit
    ASSERT_EQ(sizeof(void*)*8, 32U);
}

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
