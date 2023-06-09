#pragma once
#include <iostream>
#include "MathExpression.h"
#include "Constant.h"
#include <vector>

class Power: public MathExpression
{
private:
	std::vector<MathExpression*> _var;
	int _pow=0;

	const double fastPow() const;

public:

	Power() = default;
	Power(std::vector<MathExpression*> var, const int pow) : _var(var),_pow(pow) {}
	~Power();

	static const double fastPow(double base, int exp);
	const void print() const override;
	const double evaluate() const override;

};

