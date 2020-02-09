#include "unity_fixture.h"
#include <stdbool.h>

TEST_GROUP(Basic);
TEST_SETUP(Basic) {}
TEST_TEAR_DOWN(Basic) {}

TEST(Basic, True_is_True)
{
    TEST_ASSERT_TRUE(true);
}

TEST_GROUP_RUNNER(Basic) {
    RUN_TEST_CASE(Basic, True_is_True);
}
