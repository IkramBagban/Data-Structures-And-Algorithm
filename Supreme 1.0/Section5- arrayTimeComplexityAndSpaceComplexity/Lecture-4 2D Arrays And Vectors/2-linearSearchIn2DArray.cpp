#include <iostream>
using namespace std;

bool linearSearchIn2DArray(int arr[][3], int rows, int cols, int key)
{

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == key) return true;
        }
    }

    return false;
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
    int key = 23;
    if(linearSearchIn2DArray(arr, rows, cols,key)){
        cout << "true";
    }else{
        cout << "false";
    }

    return 0;
}
