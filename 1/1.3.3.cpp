#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (!b) return a;
    return gcd(b, a%b);
}

int main(int argc, char *argv[]) {
    int a, b, c;

    // Ask two numbers
    cout << "Input two numbers: ";
    cin >> a >> b;

    // Calculate and output GCD
    c = gcd(a, b);
    cout << "GCD: " << c << endl;

    return 0;
}

