#include <iostream>
#include <unistd.h>

using namespace std;

class Prompt {
    int count;

public:
    Prompt(char *str);
    ~Prompt();
};

Prompt::Prompt(char *str)
{
    count = atoi(str);
}

Prompt::~Prompt()
{
    for (int i = 0; i < count; i++) cout << "Beep" << endl;
}

int main(int argc, char *argv[])
{
    Prompt prompt("3");

    return 0;
}

