#include "Sine.h"
#include "Power.h"
#include <iostream>


Sine::~Sine() {
   
    _var.erase(_var.begin(), _var.end());
}

const int Sine::factorial(int n) const {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

const double Sine::evaluate() const {
    double x = 0;
    for (auto& v : _var)
    {
        x += v->evaluate();
    }
    double result = 0.0;
    
    for (int n = 0; n <= _approx; ++n) {
        int power = 2 * n + 1;
        double term = Power::fastPow(-1,n) * Power::fastPow(x,power) / factorial(power);
        result += term;
    }

    return std::round(result * 10000) / 10000;;
}
const void Sine::print() const {

    std::cout << "sin( ";
    for (size_t i = 0; i < _var.size(); i++)
    {
        if (i!=_var.size()-1)
        {
            _var[i]->print();
            std::cout << " + ";
        }
        else
        {
            _var[i]->print();
        }
    }
    std::cout << " ) = "<<this->evaluate();
}