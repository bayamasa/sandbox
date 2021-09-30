#include "gtest/gtest.h"
#include <stdio.h>

extern "C" char *print();

TEST(cmake_demo, eq_test)
{
	ASSERT_STREQ("hello world", print());
}

