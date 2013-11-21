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
    Queue queue(6);

    queue.show();
    cout << "----" << endl;

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);
    queue.show();
    cout << "----" << endl;

    queue.enqueue(6);
    queue.show();
    cout << "----" << endl;

    queue.enqueue(7);
    queue.show();
    cout << "----" << endl;

    cout << "dequeue: " << queue.dequeue() << endl;
    cout << "dequeue: " << queue.dequeue() << endl;
    cout << "dequeue: " << queue.dequeue() << endl;
    queue.enqueue(8);
    queue.enqueue(9);
    queue.show();
    cout << "----" << endl;

    cout << "dequeue: " << queue.dequeue() << endl;
    cout << "dequeue: " << queue.dequeue() << endl;
    cout << "dequeue: " << queue.dequeue() << endl;
    cout << "dequeue: " << queue.dequeue() << endl;
    cout << "dequeue: " << queue.dequeue() << endl;
    queue.show();
    cout << "----" << endl;

    cout << "dequeue: " << queue.dequeue() << endl;
    queue.show();
    cout << "----" << endl;

    return 0;
}

