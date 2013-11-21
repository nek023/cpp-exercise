#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int h, p;

    // Ask work hour
    cout << "Work hour: ";
    cin >> h;

    // Ask pay per hour
    cout << "Pay per hour: ";
    cin >> p;

    // Calculate money
    cout << "You earned: " << (p * h) << endl;

    return 0;
}

