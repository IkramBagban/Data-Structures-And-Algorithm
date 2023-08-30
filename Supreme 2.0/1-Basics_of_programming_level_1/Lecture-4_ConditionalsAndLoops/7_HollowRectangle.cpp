// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

int main()
{
    int ROWS = 4;
    int COLS = 9;

    // Print hollow rectangle pattern
    // * * * * * * * * * 
    // *               *
    // *               *
    // * * * * * * * * *
    
    // Loop through each row
    for (int row = 0; row < ROWS; row++)
    {
        // Loop through each column in the current row
        for (int col = 0; col < COLS; col++)
        {
            // Check if we're on the first row, last row, first column, or last column
            if (row == 0 || row == ROWS - 1 || col == 0 || col == COLS - 1)
            {
                // If any of the conditions are true, print a star
                cout << "* ";
            }
            else
            {
                // If none of the conditions are true, print two spaces
                cout << "  ";
            }
        }
        cout << endl; // Move to the next line after completing a row
    }

    return 0;
}
