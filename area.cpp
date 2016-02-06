// Program to calculate the area of a triangle
// Created by Star Gazer on 2/4/16.
//

#include <iostream>
#include <cmath>
//#include <iostream>
//#include <iomanip>

//#include "Point.h"

using namespace std;

//struct computeArea {
    double area;
    double s;
//    Point::Point p; // ( p1, p2, p3);
  //  p p1;
//    p p2;
//    p p3;

//    p1.setX(newX = 0.0);
//    p1.setY(newY = 0.0);
//    p1.setZ(newZ = 0.1);

//    p2.setX(newX = 3.0);
//    p2.setY(newY = 0.0);
 //   p2.setZ(newZ = 0.10);

//    p3.setX(newX = 3.0);
//    p3.setY(newY = 4.0);
//    p3.setZ(newZ = 0.1);
//};

{
double computeArea(double x, double y, double z) {

        double sideA = abs(sqrt(pow((p1.getX - p2.getX), 2.0) + (pow(p1.getY, p2.getY).
        2.0)));

        double sideB = abs(sqrt(pow((p2.getX - p3.getX), 2.0) + (pow(p2.getY, p3.getY).
        2.0)));

        double sideC = abs(sqrt(pow((p3.getX - p1.getX), 2.0) + (pow(p3.getY, p1.getY).
        2.0)));

        s = (sideA + sideB + sideC) / 2;

        area = (sqrt(S * (S - sideA) * (S - sideB) * (S - sideC)));

        return area;


}