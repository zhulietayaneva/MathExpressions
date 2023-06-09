#include "Constant.h"
#include "Sum.h"
#include "Product.h"
#include "Power.h"
#include "Sine.h"
#include "MathExpression.h"
#include <iostream>

int main() {
    Constant constant(5);
    Constant constant2(-4);
    Constant constant3(1560);
    Sum sum;
    sum.addElement(constant);
    sum.addElement(constant2);
    sum.addElement(constant3);
    std::cout << "Sum: " << std::endl;
    sum.print();
    std::cout << std::endl<< "-----------------------------" << std::endl;

    Product product;
    product.addElement(sum);
    product.addElement(*new Constant(2.0));
    std::cout << "Product: " << std::endl;
    product.print();
    std::cout << std::endl << "-----------------------------" << std::endl;

    std::vector<MathExpression*> v2;
    v2.push_back(&product);
    v2.push_back(&sum);
    Power power(v2, 3);
    std::vector<MathExpression*> v;
    v.push_back(&power);
    Sine sine(v, 4);
    std::cout << "Power: " << std::endl;
    power.print();
    std::cout << std::endl << "-----------------------------" << std::endl;

    std::cout << "Sine: " << std::endl;
    sine.print();
    std::cout << std::endl << "-----------------------------" << std::endl;



    return 0;
}

