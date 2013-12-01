#include <iostream>

using namespace std;

class Sample {
    int a;
    char c;

public:
    Sample(int x, char ch) { a = x; c = ch; }
};

int main(int argc, char *argv[])
{
    Sample ob(100, 'X');

    return 0;
}

