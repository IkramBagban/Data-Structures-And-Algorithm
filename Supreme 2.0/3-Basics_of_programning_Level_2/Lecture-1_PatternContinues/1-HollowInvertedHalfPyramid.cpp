// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

int main()
{
    // Hollow Inverted Half Pyramid
    // *****
    // *  *
    // * *
    // **
    // *
    int n = 5;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            if (col == 0 || row == 0 || col == n - row - 1)
            {
                cout << "*  ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }

    return 0;
}