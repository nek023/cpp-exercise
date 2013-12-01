#include <iostream>

using namespace std;

#define SIZE 10

class Stack {
    char stack[SIZE];
    int tos;

public:
    Stack();

    void push(char ch);
    char pop();
    void show();
};

Stack::Stack()
{
    tos = 0;
}

void Stack::push(char ch)
{
    if (tos == SIZE) {
        cout << "Error: Stack is full." << endl;
        return;
    }

    stack[tos] = ch;
    tos++;
}

char Stack::pop()
{
    if (tos == 0) {
        cout << "Error: Stack is empty." << endl;
        return 0;
    }

    tos--;
    return stack[tos];
}

void Stack::show()
{
    for (int i = 0; i < tos; i++)
        cout << i << ": " << stack[i] << endl;
}

void showStack(Stack stack)
{
    stack.show();
}

int main(int argc, char *argv[])
{
    Stack stack;
    stack.push('h');
    stack.push('o');
    stack.push('g');
    stack.push('e');

    showStack(stack);

    return 0;
}

