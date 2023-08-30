// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

int main()
{
    int ROWS = 4;
    int COLS = 9;

    // Print rectangle pattern
    // * * * * * * * * * 
    // * * * * * * * * *
    // * * * * * * * * *
    // * * * * * * * * *
    
    // Loop through each row
    for (int row = 0; row < ROWS; row++)
    {
        // Loop through each column in the current row
        for (int col = 0; col < COLS; col++)
        {
            cout << "* "; // Print a star followed by a space to create the pattern
        }
        cout << endl; // Move to the next line after completing a row
    }

    return 0;
}
