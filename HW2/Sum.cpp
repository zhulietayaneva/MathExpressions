#include "Sum.h"
#include <iostream>


Sum::~Sum() {
    for (auto& variable : _variables) {
        delete &variable;
    }
}

const double Sum::evaluate() const
{
    double sum = 0;
    for (const auto& var : _variables) {
        sum += var->evaluate();
    }
    return sum;
}
const void Sum::print() const
{
	std::cout << "(";
	for (size_t i = 0; i < _variables.size()-1; i++)
	{
		double curr = _variables[i]->evaluate();
		if (i == _variables.size()-2)
		{
			double next = _variables[i + 1]->evaluate();
			if (next < 0)
			{
				std::cout << abs(curr) << " - "<<abs(next) << ")";
				
			}
			else
			{
				std::cout << abs(curr) << " + "<<abs(next)<<")";
			}
		}
		else
		{
			
			if (_variables[i+1]->evaluate() < 0)
			{
				std::cout << abs(curr) << " - ";
			}
			else
			{
				std::cout << abs(curr) << " + ";
			}
		}
	}
}

 const void Sum::addElement(const MathExpression& el)
{
    _variables.push_back(&el);
}


