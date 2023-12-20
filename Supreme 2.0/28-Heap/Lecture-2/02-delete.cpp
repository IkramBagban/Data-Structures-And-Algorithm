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
        // step 0 : check if heap is full
        if (size == capacity)
        {
            cout << "Heap Overflow" << endl;
            return;
        }

        // step 1 : add the element at available position
        size++; // starting insertion from 1st index
        int index = size;
        arr[index] = val;

        // 1-based indexing hai. isliye array ko greater than 1 tak chala rahe.
        while (index > 1)
        {
            int parentIndex = index / 2;
            // check if parent is greater than child.
            if (arr[parentIndex] < arr[index])
            {
                // step 2 : if parent smaller then child than swap child with parent
                swap(arr[parentIndex], arr[index]);
            }
            else
            // step 3 : else break the loop
            {
                break;
            }
        }
    }

    // void deleteFromHeap(int *arr, int size, int index)
    void deleteFromHeap()
    {

        // arr[1] = arr[size];
        swap(arr[1], arr[size]);

        this->size--;

        int index = 1;

        while (index < size)
        {
            int largestkaIndex = index;
            int leftIndex = 2 * index;
            int rightIndex = 2 * index + 1;
            
            if (leftIndex <= size && arr[largestkaIndex] < arr[leftIndex])
            {
                largestkaIndex = leftIndex;
            }
            if (rightIndex <= size && arr[largestkaIndex] < arr[rightIndex])
            {
                largestkaIndex = rightIndex;
            }

            if (index == largestkaIndex)
            {
                break;
            }

            else
            {
                swap(arr[largestkaIndex], arr[index]);
                index = largestkaIndex;
            }
        }
    }

    void printHeap()
    {
        cout << "Printing Heap" << endl;
        // since our array is 1-based indexing
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Heap *h = new Heap(10);
    h->insert(70);
    h->insert(50);
    h->insert(40);
    h->insert(20);
    h->insert(30);
    h->insert(60);

    h->printHeap();
    cout << "----------------------------------" << endl;
    h->deleteFromHeap();
    cout << "----------------------------------" << endl;
    h->printHeap();

    return 0;
}