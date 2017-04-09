#include "stdafx.h"
#include "TokenValue.h"


TokenValue::TokenValue(): op(), number(0)
{
}

TokenValue::TokenValue(const char& c): number(0), op(c)
{

}

TokenValue::TokenValue(const double& num): number(num), op()
{
}

TokenValue::TokenValue(const TokenValue& obj): number(obj.number), op(obj.op)
{

}

TokenValue::~TokenValue()
{
}
