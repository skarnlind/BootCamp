/*
Implement an interface for shape, and derive circle, triangle, rectangle, square as children. Overload all three
comparison operators to compare the shapes based on their area -- if equal then their perimeter should be
considered. Only, and if only both area and perimeter are equal then the objects should be considered equal.

Pi=3

*/

#include <iostream>
#include "shapew4.hpp"
using namespace std;

int main()
{

    Rectangle r(5, 3);
    Triangle t(5, 3, 2);
    Square s(4);
    Circle c(4);

    cout << "Square less than Rectangle " << s.operator<(r)<< endl;
    cout << "Square less than Triangle " << (s < t)<< endl;
    cout << "Square less than Circle " << (s < c)<< endl;
    cout << "Triangle less than Rectangle " << (t < r)<< endl;
    cout << "Triangle less than Square " << (t < s)<< endl;
    cout << "Triangle less than Circle " << (t < c)<< endl;

    cout << "Square more than Rectangle " << s.operator>(r)<< endl;
    cout << "Square more than Triangle " << s.operator>(t)<< endl;
    cout << "Square more than Circle " << s.operator>(c)<< endl;
    cout << "Triangle more than Rectangle " << t.operator> (r)<< endl;
    cout << "Triangle more than Square " << (t > s)<< endl;
    cout << "Triangle more than Circle " << (t > c)<< endl;

    cout << "Square compared with Rectangle " << s.operator==(r)<< endl;
    cout << "Square compared with Triangle " << (s == t)<< endl;
    cout << "Square compared with Circle " << (s == c)<< endl;
    cout << "Triangle compared with Rectangle " << (t == r)<< endl;
}