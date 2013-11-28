#include <iostream>

using namespace std;

class User {
    char name[64];
    char email[64];

public:
    void store(char *name, char *email);
    void display();
};

void User::store(char *name, char *email)
{
    strcpy(this->name, name);
    strcpy(this->email, email);
}

void User::display()
{
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
}

int main(int argc, char *argv[]) {
    User user;
    user.store("Katsuma Tanaka", "questbeat@gmail.com");
    user.display();

    return 0;
}

