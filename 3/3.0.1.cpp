#include <iostream>

class widget {
    int x, y;

public:
    widget(int x, int y);
    ~widget();
};

widget::widget(int x, int y)
{
    this->x = x;
    this->y = y;
}

widget::~widget()
{
}

int main(int argc, char *argv[])
{
    return 0;
}

