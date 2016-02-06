//
// Created by Ryan on 2/3/2016.
//
#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

Point::Point(double x, double y, double z) {
    setX(x);
    setY(y);
    setZ(z);
}

double Point::distanceTo(const Point &p1, const Point &p2) const {
    double x1, x2, y1, y2, z1, z2;
    double dis;

    x1 = p1.getX();
    y1 = p1.getY();
    z1 = p1.getZ();

    x2 = p2.getX();
    y2 = p2.getY();
    z2 = p2.getZ();

    //pythagoras's formula
    dis = sqrt(pow((z2 - z1),2) + pow((x2 - x1),2) + pow((y2 - y1),2));

    return dis;
}

