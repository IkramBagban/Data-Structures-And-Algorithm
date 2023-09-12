// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

int main()
{

    // Print HollowNumericHalfPyramid.cpp
    // 1
    // 1 2
    // 1   3
    // 1     4
    // 1 2 3 4 5
    int n;
    // n = 5;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            if (col == 0 || row == n - 1)
            {
                cout << col + 1<< " ";
            }
            else if (col == row)
            {
                cout << row + 1<< " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}