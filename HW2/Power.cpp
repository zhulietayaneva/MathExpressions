#include "Power.h"
#include <iostream>


Power::~Power() {
    delete &_var;
}

const double Power::fastPow(double base, int exp) {
    if (exp == 0) {
        return 1.0;
    }

    double result = 1.0;
    double currentPow = base;
    int currentExp = std::abs(exp);

    while (currentExp > 0) {
        if (currentExp % 2 == 1) {
            result *= currentPow;
        }
        currentPow *= currentPow;
        currentExp /= 2;
    }

    return (exp < 0) ? 1.0 / result : result;
}
const double Power::fastPow() const  {
    double base = _var->evaluate();
    if (base == 0)
        return 1.0;
    else if (_pow > 0) {
        double result = 1.0;
        int exp = _pow;
        while (exp > 0) {
            if (exp % 2 == 1)
                result *= base;
            base *= base;
            exp /= 2;
        }
        return result;
    }
    else {

        return 1.0 / Power(_var, -_pow).evaluate();
    }
}

const double Power::evaluate() const{

     return fastPow();
}
const void Power::print() const
{
	std::cout << _var->evaluate()<<"^"<<_pow;
}

  