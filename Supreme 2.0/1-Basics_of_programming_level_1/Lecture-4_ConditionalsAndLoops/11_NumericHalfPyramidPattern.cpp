// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

int main()
{
    int n = 5; // Define the number of rows for the pattern

    // Print Numeric half pyramid pattern
    // 1 
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

    for (int row = 0; row < n; row++) // Loop through each row
    {
        for (int col = 0; col <= row; col++) // Loop through each column in the current row
        {
            cout << col + 1 << " "; // Print the value of column number + 1, followed by a space
        }
        cout << endl; // Move to the next line after completing a row
    }

    return 0;
}
