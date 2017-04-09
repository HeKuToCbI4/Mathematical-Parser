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
	Token(const char &);
	Token(const double &);
	~Token();
};

