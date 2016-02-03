//
// Created by Ryan on 2/3/2016.
//
#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

double Point::distanceTo(const Point &p1, const Point &p2) const {
    int x1, x2, y1, y2, z1, z2;
    double dis;

    x1 = p1.getX();
    y1 = p1.getY();
    z1 = p1.getZ();

    x2 = p2.getX();
    y2 = p2.getY();
    z2 = p2.getZ();

    dis = sqrt(pow((z2 - z2),2) + pow((x2 - x1),2) + pow((y2 - y2),2));

    return dis;
}

