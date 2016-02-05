// A 3-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __POINT_H
#define __POINT_H

class Point {
    
private:
    double x, y, z;

public:
    // Constructors
    Point();                      // default constructor
    Point(double x = 0, double y = 0, double z = 0);    // three-argument constructor

    // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);
    // Accessor methods
    double getX() const;
    double getY() const;
    double getZ() const;
    
};

#endif // __POINT_H
