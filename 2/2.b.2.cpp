#include <iostream>

using namespace std;

class Converter {
public:
    Converter(int feet);
};

Converter::Converter(int feet)
{
    int inch = feet * 12;
    cout << feet << " feet is " << inch << "-inch." << endl;
}

int main(int argc, char *argv[])
{
    Converter converter(2);

    return 0;
}

