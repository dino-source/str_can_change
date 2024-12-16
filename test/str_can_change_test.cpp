#include "../src/solution.h"
#include <gtest/gtest.h>

[[maybe_unused]] Solution sol;

TEST(TestTopic, str_can_change_test_1) {
    EXPECT_TRUE(sol.canChange("_L__R__R_", "L______RR"));
}

TEST(TestTopic, str_can_change_test_2) {
    EXPECT_FALSE(sol.canChange("R_L_", "__LR"));
}

TEST(TestTopic, str_can_change_test_3) {
    EXPECT_FALSE(sol.canChange("_R", "R_"));
}

TEST(TestTopic, str_can_change_test_4) {
    EXPECT_FALSE(sol.canChange("_LL__R__R_", "L___L___RR"));
}
