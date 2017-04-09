#include "stdafx.h"
#include "Token.h"


Token::Token(const char &c)
{
	type = EOperator;
	value = TokenValue(c);
}

Token::Token(const double &num):type(EOperand), value(TokenValue(num))
{
}

Token::Token(const Token& obj): type(obj.type), value(obj.value)
{
}

Token& Token::operator=(const Token& obj)
{
	if (&obj == this)
		return *this;
	value = obj.value;
	type = obj.type;
	return *this;
}

Token::~Token()
{
}
