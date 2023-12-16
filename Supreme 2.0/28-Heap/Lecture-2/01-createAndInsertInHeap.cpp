// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

class Heap
{
public:
    int *arr;
    int size;
    int capacity;

    Heap(int capacity)
    {
        arr = new int[capacity];
        this->size = 0;
        this->capacity = capacity;
    }

    void insert(int val)
    {
        if (size == capacity)
        {
            cout << "Heap Overflow" << endl;
            return;
        }

        size++;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parentIndex = index / 2;
            if (arr[parentIndex] > arr[index])
            {
                break;
            }
            else
            {
                swap(arr[parentIndex], arr[index]);
            }
        }
    }

    void printHeap(){
        for(int i = 1; i <= size; i++){
            cout << arr[i] << " " ;
        }
        cout << endl;
    }
};

int main()
{
   

    return 0;
}