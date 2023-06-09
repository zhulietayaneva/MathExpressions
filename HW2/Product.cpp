#include "Product.h"
#include "Constant.h"

Product::~Product()
{
	_variables.erase(_variables.begin(), _variables.end());
}

const double Product::evaluate() const
{
	double prod = 1;

	for (const auto& var : _variables) {
		prod *= var->evaluate();
	}

	return prod;

}
const void Product::print() const
{
	std::cout << "(";
	for (size_t i = 0; i < _variables.size() - 1; i++)
	{
		double curr = _variables[i]->evaluate();
		if (i == _variables.size() - 2)
		{
			double next = _variables[i + 1]->evaluate();
			if (curr < 0 && next<0)
			{
				std::cout << "(" << curr << ") * ("<<next<<"))";
			}
			else if(curr>=0 && next<0)
			{
				std::cout << curr << " * (" << next << "))";
			}
			else
			{
				std::cout << curr << " * " << next << ")";
			}
		}
		else
		{

			if (curr < 0)
			{
				std::cout << "("<<curr<<") * ";
			}
			else
			{
				std::cout << curr << " * ";
			}
		}
	}

}
const void Product::addElement(const MathExpression& el)
{
	_variables.push_back(&el);
}
