#include <iostream>

using namespace std;

const char *min(const char *a, const char *b)
{
    double da = atof(a), db = atof(b);
    return (da < db) ? a : b;
}

int min(int a, int b)
{
    return (a < b) ? a : b;
}

double min(double a, double b)
{
    return (a < b) ? a : b;
}

int main(int argc, char *argv[])
{
    const char *ca = "1.4";
    const char *cb = "1.5";
    cout << "char: " << min(ca, cb) << endl;

    int ia = 1, ib = 2;
    cout << "int: " << min(ia, ib) << endl;

    double da = 1.4, db = 1.5;
    cout << "double: " << min(da, db) << endl;

    return 0;
}

