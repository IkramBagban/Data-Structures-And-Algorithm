#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    // queston - reverse array
    // input : {1,2,3,4,5,6,7}
    // output : 7 6 5 4 3 2 1
    // to solve this we have to swap arr[start] and arr[end]
    // int arr[8] ={1,2,3,4,5,6,7,8};
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        //   swap(arr[start],arr[end]);

        // also we can solve this without using swap funciton
        // Swapping logic
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;

        // thhere are many ways to swap numbers

        // - Using Addition and Subtraction:
        // num1 = num1 + num2 // num1 = 10 + 20 = 30
        // num2 = num1 - num2 // num2 = 30 - 20 = 10
        // num1 = num1 - num2 // num1 = 30 - 10 = 20

        // - Using Arithmetic Operators (Multiplication and Division):
        // arr[start] = arr[start] * num2 // num1 = 10 * 20 = 200
        // arr[end] = arr[start] / arr[end] // arr[end] = 200 / 20 = 10
        // arr[start] = arr[start] / arr[end] // num1 = 200 / 10 = 20

        // - Using XOR Operation:
        // num1 = num1 ^ num2
        // num2 = num1 ^ num2
        // num1 = num1 ^ num2
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
