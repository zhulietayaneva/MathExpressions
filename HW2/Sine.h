#pragma once
#include "MathExpression.h"
#include "Constant.h"
#include <vector>

class Sine: public MathExpression {

private:

	std::vector<MathExpression*> _var;
	int _approx = 1;

	const int factorial(int n) const;

public:

	Sine() = default;
	Sine(std::vector<MathExpression*> var, int approx) :_var(var),_approx(approx) {}
	~Sine();

	const double evaluate() const override;
	const void print() const override;

};