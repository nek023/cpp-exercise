#include <iostream>
#include <math.h>

using namespace std;

int sroot(int n)
{
    return sqrt(n);
}

long sroot(long n)
{
    return sqrtl(n);
}

double sroot(double n)
{
    return sqrt(n);
}

int main(int argc, char *argv[])
{
    int i = 2;
    cout << "int: " << sroot(i) << endl;

    long l = 2;
    cout << "long: " << sroot(l) << endl;

    double d = 2.0;
    cout << "double: " << sroot(d) << endl;

    return 0;
}

