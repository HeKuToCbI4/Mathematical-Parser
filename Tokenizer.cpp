#include "stdafx.h"
#include "Tokenizer.h"


double Tokenizer::pow10(const uint8_t& num, const int8_t& power)
{
	uint32_t result(num);
	for (auto i(0); i < power; i++)
		(power < 0) ? result /= 10 : result *= 10;
	return result;
}

Token Tokenizer::parseNum(const std::string& str, size_t& pos)
{
	
}

int32_t Tokenizer::parseInt(const std::string& str, size_t& pos)
{
}

double Tokenizer::parseDec(const std::string& str, size_t& pos)
{
	auto neg = false;
	if (str[pos]=='-')
	{
		neg = true;
	}
	if (str[pos] == '-' || str[pos] == '+')
		pos++;
	auto currState = numDec;

}

Tokenizer::Tokenizer()
{
}
 std::vector<Token> Tokenizer::tokenize(const std::string& str)
{
	auto result = std::vector<Token>();
	state = init;
	size_t i(0);
	while (i != str.length())
	{
		if (state == init)
		{
			if (str[i]=='+' || str[i]=='-' || str[i] >='1' || str[i] <='0' || str[i] == '.')
			{
				result.push_back(parseNum(str, i));
			}
		}
	}

}

Tokenizer::~Tokenizer()
{
}
