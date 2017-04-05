#pragma once
#include <vector>
#include "Token.h"

class Tokenizer
{
	enum State
	{
		init,
		err,
		numInt,
		numDec,
		op
	};
protected:
	static State state;
public:
	Tokenizer();
	static std::vector<Token> tokenize(std::string);
	~Tokenizer();
};

