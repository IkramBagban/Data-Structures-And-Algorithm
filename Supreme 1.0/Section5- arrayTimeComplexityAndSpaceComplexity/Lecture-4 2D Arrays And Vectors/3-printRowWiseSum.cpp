#include <iostream>
using namespace std;

void printRowWiseSum(int arr[][3], int rows, int cols)
{

    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
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
        int cols= 3;
        printRowWiseSum(arr, rows, cols);

        return 0;
    }
