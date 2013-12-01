#include <iostream>
#include <cassert>

using namespace std;

class pr2;

class pr1 {
    int printing;

public:
    pr1() { printing = 0; }
    void set_print(int status) { printing = status; }

    friend bool inuse(pr1 obj1, pr2 obj2);
};

class pr2 {
    int printing;

public:
    pr2() { printing = 0; }
    void set_print(int status) { printing = status; }

    friend bool inuse(pr1 obj1, pr2 obj2);
};

bool inuse(pr1 obj1, pr2 obj2)
{
    return (obj1.printing || obj2.printing);
}

int main(int argc, char *argv[])
{
    pr1 obj1;
    pr2 obj2;
    assert(inuse(obj1, obj2) == false);

    obj2.set_print(1);
    assert(inuse(obj1, obj2) == true);

    return 0;
}

