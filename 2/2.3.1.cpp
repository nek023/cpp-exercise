#include <iostream>
#include <cassert>

using namespace std;

class area_c1 {
public:
    double width;
    double height;
};

class Rectangle : public area_c1 {
public:
    Rectangle(double width, double height);
    double area();
};

Rectangle::Rectangle(double width, double height)
{
    this->width = width;
    this->height = height;
}

double Rectangle::area()
{
    return (this->width * this->height);
}

class Isosceles : public area_c1 {
public:
    Isosceles(double width, double height);
    double area();
};

Isosceles::Isosceles(double width, double height)
{
    this->width = width;
    this->height = height;
}

double Isosceles::area()
{
    return (this->width * this->height / 2.0);
}

int main(int argc, char *argv[])
{
    Rectangle rect(2.0, 3.0);
    assert(rect.area() == 6.0);

    Isosceles iso(2.0, 3.0);
    assert(iso.area() == 3.0);

    return 0;
}

