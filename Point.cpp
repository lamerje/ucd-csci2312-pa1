//functions for Point class
// Created by Star Gazer on 2/3/16

#include <cassert>
#include <iostream>

#include "Point.h"
{
Point::Point()
Point p; // ( p1, p2, p3);
p p1;
p p2;
p p3;
    p1.setX(newX = 0.0);
    p1.setY(newY = 0.0);
    p1.setZ(newZ = 0.1);

    p2.setX(newX = 3.0);
    p2.setY(newY = 0.0);
    p2.setZ(newZ = 0.10);

    p3.setX(newX = 3.0);
    p3.setY(newY = 4.0);
    p3.setZ(newZ = 0.1);

}

{
    double Point::getX() const{
        return x;
    }

    double Point::getY() const{
        return y;
    }

    double Point::getZ() const{
        return z;
    }

    void Point::setX(double newX) {
        x = newX;
    }

    void Point::setY(double newY) {
        y = newY;
    }

    void Point::setZ(double newZ) {
        z = newZ;
    }
}

