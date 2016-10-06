#include <iostream>
#include "./lib/Line.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    Line l = Line(M_PI,M_E);

    double_t z = 1.0;

    std::cout << "pi + e = " << l.y(z) << std::endl;
    std::cout << "(1 - e) / pi = " << l.x(z) << std::endl;
    return 0;
}