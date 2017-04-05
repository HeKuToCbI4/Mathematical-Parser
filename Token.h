#pragma once
class Token
{
	enum TokenType
	{
		Operator,
		Operand,
	};
	union TokenValue// char & double, ty blyat' na c++98 pishesh?
	{
		double number;
		char op;
	};
protected:
	TokenType type;
	TokenValue value;
public:
	Token(char c);
	Token(double num);
	~Token();
};

