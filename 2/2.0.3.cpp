#include <iostream>
#include <limits>
#include <cassert>

using namespace std;

unsigned int rotate(unsigned int n)
{
    int bit_length = numeric_limits<unsigned int>::digits;
    return ((n << 1) | (n >> (bit_length - 1)));
}

unsigned long rotate(unsigned long n)
{
    int bit_length = numeric_limits<unsigned long>::digits;
    return ((n << 1) | (n >> (bit_length - 1)));
}

int main(int argc, char *argv[])
{
    unsigned int a = 13;
    int uint_bit_length = numeric_limits<unsigned int>::digits;
    for (int i = 0; i < uint_bit_length; i++) a = rotate(a);
    assert(a == (unsigned int)13);

    unsigned long b = 13;
    int ulong_bit_length = numeric_limits<unsigned long>::digits;
    for (int i = 0; i < ulong_bit_length; i++) b = rotate(b);
    assert(b == (unsigned long)13);

    return 0;
}

