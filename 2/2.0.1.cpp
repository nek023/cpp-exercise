#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    char str[128];

    cout << "String: ";
    cin >> str;

    cout << "Length: " << strlen(str) << endl;

    return 0;
}

