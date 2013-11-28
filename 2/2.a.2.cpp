#include <iostream>

using namespace std;

class Line {
    int len;

public:
    Line(int len);
};

Line::Line(int len)
{
    this->len = len;

    // Draw line
    for (int i = 0; i < len; i++) cout << "-";
    cout << endl;
}

int main(int argc, char *argv[])
{
    Line line(13);

    return 0;
}

