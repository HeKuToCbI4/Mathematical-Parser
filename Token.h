#pragma once
#include "TokenValue.h"
enum TokenType
{
	EOperator,
	EOperand,
};
class Token
{
	
	
protected:
	TokenType type;
	TokenValue value;
public:
	Token(const char &);
	Token(const double &);
	Token(const Token& obj);
	Token& operator=(const Token& obj);
	~Token();
};
