#include <iostream>
#include <vector>
using namespace std;

// Problem: Left rotate a vector by one position.
// Input: arr = {1, 2, 3, 4, 5}
// Output = {2, 3, 4, 5 ,1}
void leftRotateByOne(vector<int> arr)
{
    int firstElement = arr[0];
    int end = arr.size() - 1;

    for (int i = 0; i < end; i++)
    {
        // cout << " " << firstElement << " ";
        arr[i] = arr[i + 1];
    }
    arr[end] = firstElement;

    for (auto val : arr)
    {
        cout << val << " ";
    }
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    leftRotateByOne(arr);
    return 0;
}
