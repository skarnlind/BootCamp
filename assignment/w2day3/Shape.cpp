/*
Implement an interface for shape, and derive circle, triangle, rectangle, square as children. Overload all three
comparison operators to compare the shapes based on their area -- if equal then their perimeter should be
considered. Only, and if only both area and perimeter are equal then the objects should be considered equal.

Pi=3

*/

#include <iostream>

using namespace std;

class Shape
{
public:
    float area = 0;
    float perimeter = 0;

        bool operator>(Shape const &A)
    {
        if(this->area >A.area)
        {
        return true;
        }
        else
        {
       return false;
        }
    }
    bool operator<(Shape const &A)
    {
        if(this->area <A.area)
        {
        return true;
        }
        else
        {
       return false;
        }
    }
    // Overload == operator to compares two Shape objects.
    bool operator==(Shape const &A)
    {
        if(this->area ==A.area && this->perimeter ==A.perimeter )
        {
        return true;
        }
        else
        {
       return false;
        }
    }

};
class Circle : public Shape
{
public:
    Circle(int r)
    {
        area = r * r * 3;
        perimeter = 2 * r * 3;
    }
};
class Square : public Shape
{
public:
    Square(int s)
    {
        area = s * s;
        perimeter=4*s;
    }
}
;

class Triangle : public Shape
{
public:
    Triangle(int w, int h, int b)
    {
        area=w*h/2;
        perimeter=w+h+b;
    }
};
class Rectangle : public Shape
{
public:
    Rectangle(int w, int h)
    {
        area=w*h;
        perimeter=4*w*h;
    }
};
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