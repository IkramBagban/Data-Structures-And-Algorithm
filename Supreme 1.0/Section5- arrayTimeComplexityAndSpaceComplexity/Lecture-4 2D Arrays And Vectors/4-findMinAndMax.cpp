#include <iostream>
#include <limits.h>
using namespace std;

int getMax(int arr[][3], int rows, int cols)
{

    int max = INT_MIN;
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }

    return max;
}

int getMin(int arr[][3], int rows, int cols)
{
    
    int min = INT_MAX;
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
        }
    }

    return min;
}

int main()
{

    int arr[3][3] = {
        {1, 2, 3}, // Row 0
        {4, 5, 6}, // Row 1
        {7, 8, 9}  // Row 2
    };
    int rows = 3;
    int cols = 3;

cout << "Max Number is " << getMax(arr,rows,cols) << endl;    
cout << "Min Number is " << getMin(arr,rows,cols) << endl;    

    return 0;
}
