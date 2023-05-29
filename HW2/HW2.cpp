#include "Constant.h"
#include "Sum.h"
#include "Product.h"
#include "Power.h"
#include "Sine.h"
#include "MathExpression.h"
#include <iostream>

int main() {
    Constant constant(5);
    Sum sum;
    sum.addElement(constant);
    sum.addElement(*new Constant(4.0));
    sum.addElement(*new Constant(-7.0));
    std::cout << "Sum: " << std::endl;
    sum.print();
    std::cout << std::endl<< "-----------------------------" << std::endl;

    Product product;
    product.addElement(sum);
    product.addElement(*new Constant(2.0));
    std::cout << "Product: " << std::endl;
    product.print();
    std::cout << std::endl << "-----------------------------" << std::endl;

    Power power(&product, 3);
    Sine sine(&power, 4);
    std::cout << "Power: " << std::endl;
    power.print();
    std::cout << std::endl << "-----------------------------" << std::endl;

    std::cout << "Sine: " << std::endl;
    sine.print();
    std::cout << std::endl << "-----------------------------" << std::endl;

    return 0;
}

