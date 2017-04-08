#include "stdafx.h"
#include "Token.h"


Token::Token(const uint8_t &c)
{
	type = EOperator;
	value = TokenValue(c);
}

Token::Token(const double &num)
{
	type = EOperand;
	value = TokenValue(num);
}

Token::~Token()
{
}
