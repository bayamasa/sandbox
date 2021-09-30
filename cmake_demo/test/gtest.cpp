#include "gtest/gtest.h"

extern "C" char *print();
extern "C" void *p();

TEST(cmake_demo, eq_test)
{
	ASSERT_STREQ("hello world", print());
}

TEST(cmake_demo, eq_stdout)
{
	testing::internal::CaptureStdout();
	p();
	ASSERT_STREQ("hello world", testing::internal::GetCapturedStdout().c_str());
}
