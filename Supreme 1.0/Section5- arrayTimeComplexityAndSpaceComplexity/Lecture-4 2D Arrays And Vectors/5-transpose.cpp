#include <iostream>
#include <limits.h>
using namespace std;

void transpose(int arr[][3], int rows, int cols, int transposeArr[][3])
{

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            transposeArr[i][j] = arr[j][i];
        }
    }
}

void print2DArray(int arr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
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

    int transposeArr[3][3];


    transpose(arr, rows, cols, transposeArr);
    print2DArray(transposeArr, rows, cols);

        return 0;
}
