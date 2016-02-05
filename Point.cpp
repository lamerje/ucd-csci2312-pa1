//functions for Point class
// Created by Star Gazer on 2/3/16

#include "Point.h"

using namespace std;
{
    double Point::getX() {
        return x;
    }

    double Point::getY() {
        return y;
    }

    double Point::getZ() {
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

