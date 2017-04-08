#pragma once
class Operator
{
protected:
	uint8_t priority;
	uint8_t symbol;
public:
	Operator();
	Operator(const Operator&);
	Operator(const uint8_t &c);
	~Operator();
};

