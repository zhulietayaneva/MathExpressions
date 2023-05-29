#include <iostream>
#include "Constant.h"


Constant::Constant(const double val) : _val(val) {};

const double Constant::getValue() const
{
	return this->_val;
}

const double Constant::evaluate() const
{
	return this->getValue();
}
const void Constant::print() const
{
	std::cout << this->getValue();
}

