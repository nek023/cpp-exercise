#include <iostream>
#include <cassert>

using namespace std;

class Planet {
    int moons;
    int dist_from_sun;
    double diameter;
    double mass;

public:
    double get_miles() { return dist_from_sun; }

    friend light(Planet planet);
};

double light(Planet planet)
{
    return planet.dist_from_sun / 186000;
}

int main(int argc, char *argv[])
{
    return 0;
}

