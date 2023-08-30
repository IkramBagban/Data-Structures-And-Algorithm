// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

int main()
{
    int n = 5; // Define the size of the square pattern (n x n)

    // Square pattern
    // * * * * * 
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    
    // Loop through each row
    for (int row = 0; row < n; row++)
    {
        // Loop through each column in the current row
        for (int col = 0; col < n; col++)
        {
            cout<<"* "; // Print a star followed by a space to create the pattern
        }
        cout << endl; // Move to the next line after completing a row
    }

    return 0;
}
