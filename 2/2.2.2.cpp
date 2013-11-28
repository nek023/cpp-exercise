#include <iostream>
#include <cassert>

using namespace std;

class Box
{
    double a, b, c;

public:
    Box(double a, double b, double c);

    double vol();
};

Box::Box(double a, double b, double c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

double Box::vol()
{
    return (this->a * this->b * this-> c);
}

int main(int argc, char *argv[])
{
    Box box(2.0, 3.0, 5.0);
    assert(box.vol() == 30.0);

    return 0;
}

