﻿#include <string>
using namespace std;

class SimilarityChecker
{
public:
	SimilarityChecker(){
		length_score = 0;
	}
	int get_length_score (void)
	{
		return this->length_score;
	}
	int insertString(string input1_, string input2_)
	{
		this->input1 = input1_;
		this->input2 = input2_;

		return 0;
	}
	string getString(int num)
	{
		if (num == 1) return this->input1;
		return this->input2;
	}

private:
	int length_score;
	string input1, input2;
	string strA, strB;
};