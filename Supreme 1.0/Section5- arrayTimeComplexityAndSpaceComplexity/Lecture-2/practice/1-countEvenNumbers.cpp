
#include <iostream>
using namespace std;

// Count Even Numbers: Given an array of integers, write a program to count the number of even numbers in the array.
int countEvenNumbers(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int count = 0;
    while (start <= end)
    {
        if(start == end){
            count++;
        }else{
        if (arr[start] % 2 == 0)
        {
            count++;
        }
        if (arr[end] % 2 == 0)
        {
            count++;
        }
        }
        start++;
        end--;
    }
    return count;
}
int main()
{

    int arr[9] = {2,3,4,5,6,7,8,9,11};
    int countEven = countEvenNumbers(arr,9);
    cout << "There is total " << countEven << " even numbers present in the array ";

    return 0;
}
