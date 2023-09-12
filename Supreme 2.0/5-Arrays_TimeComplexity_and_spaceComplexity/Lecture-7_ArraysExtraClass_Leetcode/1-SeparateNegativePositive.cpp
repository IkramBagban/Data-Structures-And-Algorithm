// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <vector>
using namespace std;

// Ikram
void separateNegativePostive(int arr[], int size)
{
    int index = 0;
    int right = size - 1;
    int left = 0;

    // Loop until 'index' crosses 'right'
    while (index != right)
    {
        cout << index << endl;

        if (arr[index] < 0)
        {
            // Swap negative element with the element at 'left' and move 'left' and 'index' to the right
            swap(arr[index], arr[left]);
            left++;
            index++;
        }
        else if (arr[index] >= 0)
        {
            // If the element is non-negative, swap it with the element at 'right' and move 'right' to the left
            swap(arr[index], arr[right]);
            right--;
        }
    }
}



//// love babbar
void separateNegativePostive(int arr[], int size){

    int j =0;
    for(int index=0; index<size;index++){
        cout << index << endl;

        // condition to check if a number is negative 
        if(arr[index]< 0){

            // if number is negative then swap it with jth index and move j by 1 step ++;
            swap(arr[index], arr[j]);
            j++;
        }
    }

}
int main()
{

    int arr[] = {-23, 7, 3, 23, -3, -39, -1, 0};

    int size = 8;
    separateNegativePostive(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}