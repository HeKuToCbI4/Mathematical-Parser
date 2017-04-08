#pragma once
#include "Operator.h"

class TokenValue
{
protected:
	double number;
	Operator op;
public:
	TokenValue();
	explicit TokenValue(const uint8_t &c);
	explicit TokenValue(const double &num);
	TokenValue(const TokenValue&);
	~TokenValue();
};

