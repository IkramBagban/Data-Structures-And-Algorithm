#include <iostream>
using namespace std;

int main()
{

    // question - double the numbers
    //    int arr[5] = {2,3,4,5,6};
    //    for(int i = 0; i< 5; i++){
    //     cout << arr[i] * 2 << " ";
    //    }

    // set value of every element in the array
    int arr[5] = {2, 3, 4, 5, 6};
    for (int i = 0; i < 5; i++)
    {
        arr[i] = 1;
    }
     for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
