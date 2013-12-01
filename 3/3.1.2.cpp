#include <iostream>

using namespace std;

class Queue {
    int size;
    int *array;
    int head, tail;

public:
    Queue(int size);
    void enqueue(int num);
    int dequeue();
    void show();
};

Queue::Queue(int size)
{
    this->size = size;
    this->array = (int *)calloc(size, sizeof(int));
    this->head = this->tail = 0;
}

void Queue::enqueue(int num)
{
    if (head != tail && (head % size) == (tail % size)) {
        cout << "Error: No free space" << endl;
        return;
    }

    array[(tail++ % size)] = num;
}

int Queue::dequeue()
{
    if (head == tail) {
        cout << "Error: No entry" << endl;
        return 0;
    }

    int num = array[(head++ % size)];

    return num;
}

void Queue::show()
{
    for (int i = 0; i < size; i++) {
        cout << "q[" << i << "]: " << array[i];
        if (i == head % size) cout << " <--head";
        if (i == tail % size) cout << " <--tail";
        cout << endl;
    }
}

int main(int argc, char *argv[])
{
    Queue queue1(6);
    queue1.enqueue(1);
    queue1.enqueue(2);
    queue1.enqueue(3);

    Queue queue2 = queue1;
    cout << queue2.dequeue() << endl;

    return 0;
}

