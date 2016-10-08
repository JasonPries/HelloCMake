#ifndef HELLOCMAKE_LINE_H
#define HELLOCMAKE_LINE_H

#include <cmath>

class Line {
public:

    Line(double_t m_in, double_t b_in) : m(m_in), b(b_in) {};

    double_t y(const double_t &x) const;
    double_t x(const double_t &y) const;

private:
    double_t m;
    double_t b;
};


#endif //HELLOCMAKE_LINE_H
