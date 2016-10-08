#include "gtest/gtest.h"
#include "../lib/Line.h"

TEST(LINE, LINE_METHOD_x) {
    Line lobj = Line(M_PI, M_E);

    EXPECT_NEAR(lobj.y(1.0), 3.14159 + 2.71828, 1e-4);
    EXPECT_NEAR(lobj.y(M_SQRT2), 3.14159 * 1.41421 + 2.71828, 1e-4);
}

TEST(LINE, LINE_METHOD_y) {
    Line lobj = Line(M_PI, M_E);

    EXPECT_NEAR(lobj.x(1.0), (1.0 - 2.71828) / 3.14159, 1e-4);
    EXPECT_NEAR(lobj.x(M_SQRT2), (1.41421 - 2.71828) / 3.14159, 1e-4);
}