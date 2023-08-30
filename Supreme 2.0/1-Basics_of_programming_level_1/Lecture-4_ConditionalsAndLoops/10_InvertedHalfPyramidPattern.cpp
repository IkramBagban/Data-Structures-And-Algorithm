// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

int main()
{
    int n = 5; // Define the number of rows for the pattern

    // Print inverted half pyramid pattern
    // * * * * * 
    // * * * *
    // * * *
    // * *
    // *

    for (int row = 0; row < n; row++) // Loop for each row
    {
        // Loop through each column in the current row
        for (int col = 0; col < n - row; col++) // Columns decrease with each row
        {
            cout << "* "; // Print a star followed by a space
        }
        cout << endl; // Move to the next line after completing a row
    }

    return 0;
}
