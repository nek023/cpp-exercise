#include <iostream>
#include <time.h>

using namespace std;

class Dice {
    int num;

public:
    Dice();
    void roll();
};

Dice::Dice()
{
    srand((unsigned int)time(NULL));
}

void Dice::roll()
{
    int num = rand() % 6 + 1;
    cout << "Number: " << num << endl;
}

int main(int argc, char *argv[])
{
    Dice dice;
    for (int i = 0; i < 10; i++) dice.roll();

    return 0;
}

