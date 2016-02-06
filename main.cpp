// main.cpp
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

#include "ErrorContext.h"
#include "PointTests.h"

using std::cout;
using std::endl;

using namespace Testing;


int main() {

    const int NumIters = 3;

//    Point p1(0.0, 0.0, 0.1), p2(3.0, 0.0, 0.1);
//   Point p3(3.0, 4.0, 0.1);    // initialize objects p1, p2, p3)

//    p1.setX(newX = 0.0);
//    p1.setY(newY = 0.0);
//    p1.setZ(newZ = 0.1);

//    p2.setX(newX = 3.0);
//    p2.setY(newY = 0.0);
//    p2.setZ(newZ = 0.10);

//    p3.setX(newX = 3.0);
//    p3.setY(newY = 4.0);
//    p3.setZ(newZ = 0.1);



    cout << endl << "Testing PA1!!" << endl << endl;

    cout << "NOTE:  If you see any memory errors, you MUST fix them!" << endl;
    cout << "       Tests intentionally invoke destructors after they complete,"
    << endl;
    cout << "       so if you see a seg-fault after a passed test, it is"
    << endl;
    cout << "       probably a bug in your destructor." << endl;

    cout << endl;

    ErrorContext ec(cout);

    // point tests
    test_point_smoketest(ec);
    test_point_getset(ec, NumIters);
    test_point_figures(ec, NumIters);

    // area tests
    test_area(ec, NumIters);


    return 0;
}
