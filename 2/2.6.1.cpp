#include <iostream>
#include <cassert>

using namespace std;

inline int myabs(int n)
{
    return (n < 0) ? -n : n;
}

inline long myabs(long n)
{
    return (n < 0) ? -n : n;
}

inline double myabs(double n)
{
    return (n < 0) ? -n : n;
}

int main(int argc, char *argv[])
{
    int a = 2;
    assert(myabs(a) == (int)2);

    long b = -13;
    assert(myabs(b) == (long)13);

    double c = -3.5;
    assert(myabs(c) == (double)3.5);

    return 0;
}

