//
// Created by Ryan on 2/3/2016.
//
#include <cmath>
#include "Point.h"

using namespace std;

double computeArea(const Point &a, const Point &b, const Point &c) {
    double side1, side2, side3, semiPerm, area;

    side1 = a.distanceTo(a, b);
    side2 = b.distanceTo(b, c);
    side3 = c.distanceTo(c, a);

    semiPerm = (side1 + side2 + side3)/2;

    area = sqrt(semiPerm*(semiPerm - side1)*(semiPerm - side2)*(semiPerm - side3));

    return area;
}
