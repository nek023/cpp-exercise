#include <iostream>
#include <ctime>

using namespace std;

class StopWatch {
    clock_t startingTime;
    clock_t endingTime;

public:
    StopWatch();
    ~StopWatch();

    void start();
    void stop();
    void show();
};

StopWatch::StopWatch()
{
    startingTime = 0;
    endingTime = 0;
}

StopWatch::~StopWatch()
{
    stop();
}

void StopWatch::start()
{
    startingTime = clock();
    endingTime = startingTime;
}

void StopWatch::stop()
{
    endingTime = clock();

    cout << "Time: " << (clock() - startingTime) / CLOCKS_PER_SEC << endl;
}

void StopWatch::show()
{
    cout << "Time: " << (clock() - startingTime) / CLOCKS_PER_SEC << endl;
}

int main(int argc, char *argv[])
{
    StopWatch stopWatch;
    stopWatch.start();

    stopWatch.show();

    for (unsigned long i = 0; i < 600000000; i++);

    return 0;
}

