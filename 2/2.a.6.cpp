#include <iostream>
#include <math.h>

using namespace std;

class myclass {
    int i, j;

public:
    inline myclass(int x, int y) { i = x; j = y; };
    void show() { cout << "i = " << i << ", j = " << j << endl; };
};

int main(int argc, char *argv[])
{
    myclass count(2, 3);
    count.show();

    return 0;
}

