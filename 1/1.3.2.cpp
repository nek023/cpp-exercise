#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int feet;

    do {
        // Input feet
        cout << "Feet: ";
        cin >> feet;

        // Convert feet to inch
        cout << "Inch: " << (feet * 12) << endl;
    } while (feet > 0); // End when the user input zero

    return 0;
}

