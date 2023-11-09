#include <iostream>
using namespace std;

class Stack
{
private:
    int topIndex; // Renamed to avoid conflict
    int size;
    int *arr;

public:
    Stack(int _size)
    {
        this->topIndex = -1;
        this->size = _size;
        this->arr = new int[_size];
    }

    void push(int data)
    {
        if (topIndex < size - 1)
        {
            topIndex++;
            arr[topIndex] = data;
        }
        else
        {
            cout << "Stack Is Overflow" << endl;
        }
    }

    int pop()
    {
        if (topIndex != -1)
        {
            int temp = arr[topIndex];
            topIndex--;
            return temp;
        }

        return -1;
    }

    int getSize()
    {
        return topIndex + 1;
    }

    int getTop()
    {
        if (topIndex != -1)
        {
            return arr[topIndex];
        }
        return -1;
    }

    int isEmpty()
    {
        if (topIndex == -1)
        {
            return 1;
        }
        return 0;
    }
};

int main()
{
    Stack *st = new Stack(5);

    st->push(10);
    st->push(20);
    st->push(30);
    st->push(40);
    st->push(50);

    cout << "Size Of Stack before pop : " << st->getSize() << endl;
    cout << "Top Element Before pop : " << st->getTop() << endl;

    st->pop(); // remove top/last element

    cout << "Size Of Stack after pop : " << st->getSize() << endl;
    cout << "Top Element after pop : " << st->getTop() << endl;

    if (st->isEmpty())
    {
        cout << "stack Is Empty " << endl;
    }
    else
    {
        cout << "Stack Is Not Empty" << endl;
    }

    st->push(23);
    cout << "Top : " << st->getTop() << endl;

    st->push(23);
    delete st;

    return 0;
}
