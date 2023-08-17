#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize a 2D Array
    int arr[3][3]; // Declared an array with 3 rows and 3 columns
    
    int brr[3][3] = {
        {1, 2, 3}, // Row 0
        {4, 5, 6}, // Row 1
        {7, 8, 9}  // Row 2
    };

    // Access and print the value 2 from the 2D array
    cout << "Value at brr[0][1]: " << brr[0][1] << endl;

    // Access and print the value 9 from the 2D array
    cout << "Value at brr[2][2]: " << brr[2][2] << endl;

    // Print all elements of the 2D array row-wise
    cout << "2D Array elements (row-wise):" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl; // Move to the next row
    }

    cout << endl << endl;

    // Print all elements of the 2D array column-wise
    cout << "2D Array elements (column-wise):" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << brr[j][i] << " ";
        }
        cout << endl; // Move to the next column
    }

    return 0;
}
