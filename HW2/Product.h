#pragma once
#include <iostream>
#include <vector>
#include "MathExpression.h"


class Product: public MathExpression
{
private:
	std::vector<const MathExpression*> _variables;

public:
	Product() = default;
	Product(const std::vector<const MathExpression*>& variables) :_variables(variables) {}
	~Product();

	const double evaluate() const override;
	const void print() const override;
	const void addElement(const MathExpression& el);

};

