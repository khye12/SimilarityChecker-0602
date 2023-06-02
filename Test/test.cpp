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

TEST(SimilarityCheckerTest, checkStringLength1) {
	SimilarityChecker checker;
	EXPECT_EQ(0, checker.insertString("ABCD", "ABCD"));
	EXPECT_EQ(0, checker.strLengthCompare());
	EXPECT_EQ(60, checker.checkStringLength());
}
TEST(SimilarityCheckerTest, getLength) {
	SimilarityChecker checker;
	EXPECT_EQ(0, checker.insertString("ABC", "ABCDE"));
	EXPECT_EQ(0, checker.strLengthCompare());
	EXPECT_EQ(5, checker.getLength(1));
	EXPECT_EQ(3, checker.getLength(2));
}

TEST(SimilarityCheckerTest, checkStringLength2) {
	SimilarityChecker checker;
	EXPECT_EQ(0, checker.insertString("ABCD", "ABCDE"));
	EXPECT_EQ(0, checker.strLengthCompare());
	EXPECT_EQ(5, checker.getLength(1));
	EXPECT_EQ(4, checker.getLength(2));
	EXPECT_EQ(45, checker.checkStringLength());
}

TEST(SimilarityCheckerTest, checkStringLength3) {
	SimilarityChecker checker;
	EXPECT_EQ(0, checker.insertString("A", "BB"));
	EXPECT_EQ(0, checker.strLengthCompare());
	EXPECT_EQ(0, checker.checkStringLength());
}