#include <iostream>
#include <vector>
using namespace std;
void printArray(vector<int> arr)
{
    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
}

    // Problem: Sort an array of 0s and 1s in-place.
    // Input: arr = {0, 0, 1, 0, 1, 0, 0, 1, 0, 1}
    // Output: {0,0,0,0,0,0,1,1,1,1}
void sortZerosOnes(vector<int> arr)
{

    int start = 0;
    int end = arr.size() - 1;
    int i = 0;

    while (i != end)
    {
        // cout << endl
            //  << endl
            //  << "i = " << i << " start = " << start << " end = " << end << endl;
        if (arr[i] == 0)
        {
            // cout << "found 0 " << endl;
            // cout << "arr before swap  " << endl;
            // printArray(arr);
            swap(arr[i], arr[start]);
            // cout << "ar after swap  " << endl;
            // printArray(arr);
            i++;
            start++;
        }
        else if (arr[i] == 1)
        {
            // cout << "found 1 " << endl;
            // cout << "arr before swap  " << endl;
            // printArray(arr);
            swap(arr[i], arr[end]);
            // cout << "ar after swap  " << endl;
            // printArray(arr);
            end--;
        }
    }
     printArray(arr);
}

int main()
{

    // sort 0's and 1's
    vector<int> arr{0, 0, 1, 0, 1, 0, 0, 1, 0, 1};
    cout << "Before Sort " << endl;
    printArray(arr);
    
    cout << "after Sort " << endl;
    sortZerosOnes(arr);
   
    return 0;
}
