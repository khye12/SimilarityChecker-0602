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
private:
	int length_score;
};