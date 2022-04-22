#ifndef shapew4_hpp
#define shapew4_hpp
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

#endif /* shapew4_hpp */
