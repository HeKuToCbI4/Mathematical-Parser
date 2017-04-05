#include "stdafx.h"
#include "Token.h"


Token::Token(char c)
{
	type = Operator;
	value.op = c;
}

Token::Token(double num)
{
	type = Operand;
	value.number = num;
}

Token::~Token()
{
}
