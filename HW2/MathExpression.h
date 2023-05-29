#pragma once
#include <iostream>

/*
evaluate - ������� �������������� �����;
print - �������� �������������� ����� �� ����������� �����.
*/


class MathExpression {

public:

	const virtual double evaluate() const = 0;
	const virtual void print() const = 0;
	virtual ~MathExpression() {}

};


