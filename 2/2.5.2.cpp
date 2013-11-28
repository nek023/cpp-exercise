#include <iostream>
#include <cassert>

using namespace std;

union Bits {
    short int swap(short int num);
};

short int Bits::swap(short int num)
{
    return ((num << 8) | (num >> 8));
}

void show(short int num)
{
    for (int i = 0; i < 16; i++) {
        cout << ((num & (1 << 15)) >> 15);
        num = num << 1;
    }
    cout << endl;
}

int main(int argc, char *argv[])
{
    Bits obj;

    short int a = 2013;
    show(a);

    short int b = obj.swap(a);
    show(b);

    return 0;
}

