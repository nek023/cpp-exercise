#include <iostream>

using namespace std;

class Card {
    char title[128];
    char author[64];
    int number;

public:
    void store(char *title, char *author, int number);
    void show();
};

void Card::store(char *title, char *author, int number)
{
    strcpy(this->title, title);
    strcpy(this->author, author);
    this->number = number;
}

void Card::show()
{
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Number of books: " << number << endl;
}

int main(int argc, char *argv[])
{
    Card card;

    card.store("The Art of UNIX Programming", "Eric S.Raymond", 12);
    card.show();

    return 0;
}

