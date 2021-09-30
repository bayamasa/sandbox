cmake_minimum_required(VERSION 3.20)
project(hello_world C CXX)

find_package(GTest REQUIRED)

add_executable(
	main
	print.c
	test/gtest.cpp
)

target_link_libraries(
	main
	GTest::Main
)

# include(GoogleTest)
