// A 2-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __POINT_H
#define __POINT_H

class Point {
    
private:
    double x, y, z;

public:
    // Constructors
    Point(){};                      // default constructor
    Point(double x, double y, double z);    // two-argument constructor

    // Mutator methods
    void setX(double newX){x = newX;}
    void setY(double newY){y = newY;}
    void setZ(double newZ){z = newZ;}

    // Accessor methods
    double getX() const{return x;}
    double getY() const{return y;}
    double getZ() const{return z;}

    double distanceTo(const Point &p1, const Point &p2) const;
};

#endif // __POINT_H
