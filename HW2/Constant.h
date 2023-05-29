#pragma once
#include <iostream>
#include "MathExpression.h"


class Constant: public MathExpression
{
private:
	const double _val=0;

public:

	Constant() = default;
	Constant(const double val);

	const double getValue() const;

	const double evaluate() const override;
	const void print() const override;

};

