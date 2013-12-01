#include <iostream>

using namespace std;

class Who {
    char identifier;

public:
    Who(char identifier);
    ~Who();
};

Who::Who(char identifier)
{
    this->identifier = identifier;

    cout << "Constructor of '" << this->identifier << "'" << endl;
}

Who::~Who()
{
    cout << "Destructor of '" << this->identifier << "'" << endl;
}

Who makeWho()
{
    Who who('B');
    return who;
}

int main(int argc, char *argv[])
{
    Who whoA('A');
    Who whoB = makeWho();

    return 0;
}

