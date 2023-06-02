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

