//
// Created by jpries on 10/5/16.
//

#include <cstdlib>
#include "Line.h"

double_t Line::y(const double_t &x) const {
    return (m * x + b);
};

double_t Line::x(const double_t &y) const {
    double_t x;
    if (m == 0) {
        if (y == b) {
            x = fmod(rand(), 2*b) - b; //if slope is zero, return random number between [-b,b]
        }
        else {
            x = NAN; //no solution
        }
    }
    else {
        x = (y - b) / m;
    }

    return x;
}
