//functions for Point class
// Created by Star Gazer on 2/3/16


#include <iostream>

#include "Point.h"

{

Point::Point(): { }

Point::Point(double x = 0, double y = 0, double z = 0): {
}
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

