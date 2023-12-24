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
            if (arr[parentIndex] < arr[index])
            {
                swap(arr[parentIndex], arr[index]);
            }
            else
            {
                break;
            }
        }
    }

    void deleteFromHeap()
    {
        swap(arr[1], arr[size]);

        this->size--;

        int index = 1;

        this->recursiveHeapify(arr, size, index);
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

    void iterativeHeapify(int *arr, int n, int index)
    {
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
    void recursiveHeapify(int *arr, int n, int index)
    {

        int rightKaIdx = 2 * index;
        int leftKaIdx = 2 * index + 1;
        int largestkaIndex = index;

        if (rightKaIdx <= n && arr[rightKaIdx] > arr[largestkaIndex])
        {
            largestkaIndex = rightKaIdx;
        }
        if (leftKaIdx <= n && arr[leftKaIdx] > arr[largestkaIndex])
        {
            largestkaIndex = leftKaIdx;
        }

        if (largestkaIndex == index)
        {
            return;
        }

        else
        {
            swap(arr[largestkaIndex], arr[index]);

            recursiveHeapify(arr, n, largestkaIndex);
        }
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