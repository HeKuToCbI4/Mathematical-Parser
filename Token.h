#pragma once
#include "TokenValue.h"

class Token
{
	enum TokenType
	{
		EOperator,
		EOperand,
	};
	
protected:
	TokenType type;
	TokenValue value;
public:
	Token(const uint8_t &);
	Token(const double &);
	~Token();
};

