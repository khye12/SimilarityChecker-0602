#include "pch.h"
#include "../SimilarityChecker-1/SimilarityChecker-1.cpp"

TEST(SimilarityCheckerTest, getLengthScore) {
	SimilarityChecker checker;
	EXPECT_EQ(0, checker.get_length_score());
}

TEST(SimilarityCheckerTest, setString) {
	SimilarityChecker checker;
	EXPECT_EQ(0, checker.insertString("ABCD", "ABCD"));
	EXPECT_EQ("ABCD", checker.getString(1));
	EXPECT_EQ("ABCD", checker.getString(2));
}

TEST(SimilarityCheckerTest, stringCompare) {
	SimilarityChecker checker;
	EXPECT_EQ(0, checker.insertString("ABCD", "ABCDE"));
	EXPECT_EQ(0, checker.strLengthCompare());
	EXPECT_EQ("ABCDE", checker.getString(1));
	EXPECT_EQ("ABCD", checker.getString(2));
}