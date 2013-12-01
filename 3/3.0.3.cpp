#include <iostream>

using namespace std;

class Planet {
    int moons;
    double dist_from_sun;
    double diameter;
    double mass;

public:
    void setMoons(int moons);
    void setDistanceFromSun(double dist_from_sun);
    void setDiameter(double diameter);
    void setMass(double mass);
    void show();
};

void Planet::setMoons(int moons)
{
    this->moons = moons;
}

void Planet::setDistanceFromSun(double dist_from_sun)
{
    this->dist_from_sun = dist_from_sun;
}

void Planet::setDiameter(double diameter)
{
    this->diameter = diameter;
}

void Planet::setMass(double mass)
{
    this->mass = mass;
}

void Planet::show()
{
    cout << "Moons: " << moons << endl;
    cout << "Distance from sun: " <<  dist_from_sun << endl;
    cout << "Diameter: " << diameter << endl;
    cout << "Mass: " << mass << endl;
}

class Mars : public Planet {
public:
    Mars();
};

Mars::Mars()
{
    this->setMoons(1);
    this->setDistanceFromSun(2.0);
    this->setDiameter(3.0);
    this->setMass(4.0);
}

int main(int argc, char *argv[])
{
    Mars mars;
    mars.show();

    return 0;
}

