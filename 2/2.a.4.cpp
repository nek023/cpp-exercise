#include <iostream>
#include <math.h>

using namespace std;

class area_c1 {
public:
    double width;
    double height;
};

class Cylinder : public area_c1 {
public:
    Cylinder(double width, double height);
    double area();
};

Cylinder::Cylinder(double width, double height)
{
    this->width = width;
    this->height = height;
}

double Cylinder::area()
{
    double r = this->width;
    return ((2.0 * M_PI * r * r) + (r * 2.0 * M_PI * this->height));
}

int main(int argc, char *argv[])
{
    Cylinder cylinder(2.0, 3.0);
    cout << "Area: " << cylinder.area() << endl;

    return 0;
}

