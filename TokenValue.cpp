#include "stdafx.h"
#include "TokenValue.h"


TokenValue::TokenValue(): op(), number(0)
{
}

TokenValue::TokenValue(const uint8_t& c): number(0), op(c)
{

}

TokenValue::TokenValue(const double& num): number(num), op()
{
}

TokenValue::TokenValue(const TokenValue& obj): op(obj.op), number(obj.number)
{

}

TokenValue::~TokenValue()
{
}
