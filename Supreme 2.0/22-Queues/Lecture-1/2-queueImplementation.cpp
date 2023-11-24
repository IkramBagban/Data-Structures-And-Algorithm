// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int front;
    int rear;
    int size;

    Queue(int size)
    {
        this->arr = new int[size];
        this->front = -1;
        this->rear = -1;
        this->size = size;
    }

    ~Queue()
    {
        delete[] arr;  // Free the allocated memory
    }

    void push(int data)
    {
        if (rear == -1 && front == -1)
        {
            front++;
            rear++;
            arr[rear] = data;
        }
        else if (rear == size - 1)
        {
            cout << "Queue Is Overflow" << endl;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    int getFront()
    {
        if (front == -1)
            return -1;
        return arr[front];
    }
    int getRear()
    {
        if (rear == -1)
            return -1;
        return arr[rear];
    }
    void pop()
    {
        if (rear == -1 && front == -1)
        {
            cout << "Queue Is Underflow" << endl;
        }
        else if (rear == front)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
    }

    int empty()
    {
        if (rear == -1 && front == -1)
            return 1;

        return 0;
    }

    int getSize()
    {
        if (rear == -1 && front == -1)
        {
            return 0;
        }

        return rear - front + 1;
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{

    Queue q(5);

    cout << "Front :" << q.getFront() << endl;
    cout << "Rear :" << q.getRear() << endl;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    cout << endl;
    q.print();
    cout << "Front :" << q.getFront() << endl;
    cout << "Rear :" << q.getRear() << endl;
    cout << "Size Of Queue : " << q.getSize() << endl;
    cout << "is Queue Empty : " << q.empty() << endl;

    cout << endl;
    cout << "popping one element " << endl;
    q.pop();
    q.print();
    cout << "Front :" << q.getFront() << endl;
    cout << "Rear :" << q.getRear() << endl;

    cout << endl;
    cout << "Only one element in Queue" << endl;
    q.pop();
    q.pop();
    q.pop();
    q.print();
    cout << "Front :" << q.getFront() << endl;
    cout << "Rear :" << q.getRear() << endl;

    cout << endl;
    cout << "Empty Queue" << endl;
    q.pop();
    q.print();
    cout << "Front :" << q.getFront() << endl;
    cout << "Rear :" << q.getRear() << endl;

    cout << endl
         << "trying to pop after empty" << endl;

    q.pop();

    cout << endl
         << "Size Of Queue : " << q.getSize() << endl;
    cout
        << "is Queue Empty : " << q.empty() << endl;

    cout << endl;
    cout << "pushing After empty" << endl;
    q.push(1000);
    q.push(2000);
    q.print();
    cout << "Front :" << q.getFront() << endl;
    cout << "Rear :" << q.getRear() << endl;

    cout << endl
         << "trying to pop after empty" << endl;

    return 0;
}