//
// Created by Administrator on 2023/2/20.
//
#include <gtest/gtest.h>

TEST(HelloTest, BasicAssertions){
	// expect two strings not to be equal
	EXPECT_STRNE("hello", "world");
	// expect equality.
	EXPECT_EQ(7 * 3, 21);
}

TEST(OneTest, BasicAssertions){
	// expect two strings not to be equal
	EXPECT_STRNE("heo", "world");
	// expect equality.
	EXPECT_EQ(3 * 3, 9);
}