#include <iostream>
#include <cassert>

using namespace std;

class strtype {
    char *p;
    int len;

public:
    strtype(char *ptr);
    ~strtype();

    void show();

    friend char *get_string(strtype *str);
};

strtype::strtype(char *ptr)
{
    len = strlen(ptr);
    p = (char *)malloc(len + 1);
    if (!p) {
        cout << "Error: Cannot allocate." << endl;
        exit(1);
    }
    strcpy(p, ptr);
}

strtype::~strtype()
{
    free(p);
}

void strtype::show()
{
    cout << p << " (len: " << len << ")" << endl;
}

char *get_string(strtype *str)
{
    return str->p;
}

int main(int argc, char *argv[])
{
    strtype str("Hello, world!");
    str.show();

    char *p = get_string(&str);
    cout << p << endl;

    return 0;
}


