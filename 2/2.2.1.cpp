#include <iostream>
#include <cassert>

using namespace std;

class Stack
{
    char *stack;
    int tos;
    char who;
    int size;

public:
    Stack(char who, int size);
    ~Stack();

    void push(char ch);
    char pop();
};

Stack::Stack(char who, int size)
{
    this->stack = (char *)malloc(sizeof(char) * size);
    this->tos = 0;
    this->who = who;
    this->size = size;
}

Stack::~Stack()
{
    free(this->stack);
}

void Stack::push(char ch)
{
    if (tos == size) {
        cout << "Error: Stack '" << who << "' is full." << endl;
        return;
    }

    stack[tos] = ch;
    tos++;
}

char Stack::pop()
{
    if (tos == 0) {
        cout << "Error: Stack '" << who << "' is empty." << endl;
        return 0;
    }

    tos--;
    return stack[tos];
}

int main(int argc, char *argv[])
{
    Stack stack('A', 64);
    stack.push('H');
    stack.push('o');
    stack.push('g');
    stack.push('e');

    assert(stack.pop() == 'e');
    assert(stack.pop() == 'g');
    assert(stack.pop() == 'o');
    assert(stack.pop() == 'H');

    return 0;
}

