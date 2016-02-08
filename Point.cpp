// functions for Point class
// Created by Star Gazer on 2/3/16

#include "Point.h"

Point::Point(): x(0), y(0), z(0){}

Point::Point(double x, double y, double z):
    x(x), y(y), z(z)
{
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


