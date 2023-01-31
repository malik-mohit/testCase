#include "pch.h"
#include"C:\Users\mohit\source\repos\ConsoleApplication1\ConsoleApplication1\Header.h"
TEST(TestCaseName, TestName) {
	EXPECT_EQ(1, uniqueCharacters("abc"));
	EXPECT_TRUE(true);
	EXPECT_EQ(1, uniqueCharacters("abbc"));
	EXPECT_TRUE(true);
	EXPECT_EQ(1, uniqueCharacters("abvvc"));
    EXPECT_TRUE(true);
}