#pragma once

#include "Token.h"
#include <vector>

class Converter
{
public: 
	Converter();
	std::vector<Token> convert(const std::vector<Token>& expression);
	~Converter();
};


