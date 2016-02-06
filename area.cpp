//
// Created by Ryan on 2/3/2016.
//
#include <cmath>
#include "Point.h"

using namespace std;

double computeArea(const Point &a, const Point &b, const Point &c) {
    double side1, side2, side3, semiPerm, area;

    //set the sides of the triangle to be the distance between each of the points
    side1 = a.distanceTo(a, b);
    side2 = b.distanceTo(b, c);
    side3 = c.distanceTo(c, a);

    //set up Herron's formula by getting the semi-perimeter(perimeter/2)
    semiPerm = (side1 + side2 + side3)/2;

    //Herron's formula for the area of a triangle with three sides and the semi-perimeter
    area = sqrt(semiPerm*(semiPerm - side1)*(semiPerm - side2)*(semiPerm - side3));

    return area;
}
