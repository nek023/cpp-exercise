#include <iostream>
#include <cassert>

using namespace std;

class Base {
    int a;

public:
    void setA(int a) { this->a = a; }
    int getA() { return this->a; }
};

class Derived : public Base {
    int b;

public:
    void setB(int b) { this->b = b; }
    int getB() { return this->b; }
};

int main(int argc, char *argv[])
{
    Derived obj1;
    obj1.setA(10);
    cout << "obj1.a = " << obj1.getA() << endl;

    Derived obj2 = obj1;
    cout << "obj2.a = " << obj2.getA() << endl;

    return 0;
}


