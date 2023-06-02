#include "pch.h"
#include "../SimilarityChecker-1/SimilarityChecker-1.cpp"

TEST(SimilarityCheckerTest, getLengthScore) {
	SimilarityChecker checker;
	EXPECT_EQ(0, checker.get_length_score());
}