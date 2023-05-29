#pragma once
#include "MathExpression.h"
#include "Constant.h"
#include <iostream>
#include <vector>


class Sum : public MathExpression
{
private:
	std::vector<const MathExpression*> _variables;

public:

	Sum() = default;
	Sum(const std::vector<const MathExpression*>& variables):_variables(variables) {};
	~Sum();

	const double evaluate() const override;
	const void print() const override;
	const void addElement(const MathExpression& el);


};

