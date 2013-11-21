#include <iostream>
#include <unistd.h>

using namespace std;

void sleep(const char *interval)
{
    sleep(atoi(interval));
}

int main(int argc, char *argv[])
{
    sleep(10);
    sleep("10");

    return 0;
}

