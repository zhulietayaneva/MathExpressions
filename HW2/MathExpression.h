#pragma once
#include <iostream>

/*
evaluate - оценява математическия израз;
print - принтира математическия израз на стандартния изход.
*/


class MathExpression {

public:

	const virtual double evaluate() const = 0;
	const virtual void print() const = 0;
	virtual ~MathExpression() {}

};


