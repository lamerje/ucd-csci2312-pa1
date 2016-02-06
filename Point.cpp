//functions for Point class
// Created by Star Gazer on 2/3/16

#include <cassert>
#include <iostream>

#include "Point.h"

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

