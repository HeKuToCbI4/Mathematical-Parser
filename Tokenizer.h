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
	double pow10(const uint8_t&, const int8_t&);
	Token parseNum(const std::string&, size_t&);
	int32_t parseInt(const std::string&, size_t&);
	double parseDec(const std::string&, size_t&);
public:
	Tokenizer();
	static std::vector<Token> tokenize(const std::string&);
	~Tokenizer();
};

