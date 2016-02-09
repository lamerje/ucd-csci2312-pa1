// Program to calculate the area of a triangle
// Created by Star Gazer on 2/4/16.
//

#include <iostream>
#include <cmath>
//#include <iostream>
//#include <iomanip>

#include "Point.h"

using namespace std;

//struct computeArea {

//    Point p;    // ( p1, p2, p3);
//    p p1;
//    p p2;
//    p p3;
//    p1.setX(newX = 0.0);
//    p1.setY(newY = 0.0);
//    p1.setZ(newZ = 0.1);

//    p2.setX(newX = 3.0);
//    p2.setY(newY = 0.0);
//    p2.setZ(newZ = 0.10);

//    p3.setX(newX = 3.0);
//    p3.setY(newY = 4.0);
//    p3.setZ(newZ = 0.1);
//};

double computeArea(const Point &a, const Point &b, const Point &c)
 {


        double area;    // variable to pass
        double s;       // variable to support computation

        double sideA = sqrt(abs(pow((a.getX() - b.getX()), 2.0)) + abs(pow((a.getY() - b.getY()), 2.0)));

        double sideB = sqrt(abs(pow((b.getX() - c.getX()), 2.0)) + abs(pow((b.getY() - c.getY()), 2.0)));

        double sideC = sqrt(abs(pow((c.getX() - a.getX()), 2.0)) + abs(pow((c.getY() - a.getY()), 2.0)));

        s = (sideA + sideB + sideC) / 2;

        area = sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));


        return area;


}