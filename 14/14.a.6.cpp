#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

typedef map<string, string> phonebook;

int main(int argc, char *argv[])
{
    // Get argument
    if (argc < 2) {
        cout << "Error: Please specify the name." << endl;
        return 1;
    }
    string name = string(argv[1]);

    // Create a phone book
    phonebook pb;
    pb.insert(pair<string, string>("Hoge", "09012345678"));
    pb.insert(pair<string, string>("Piyo", "09087654321"));

    // Find the phone number for the given name
    phonebook::iterator it = pb.find(name);
    if (it != pb.end())
        cout << name << ": " << it->second << endl;
    else
        cout << "No phone number was found for '" << name << "'." << endl;

    return 0;
}

