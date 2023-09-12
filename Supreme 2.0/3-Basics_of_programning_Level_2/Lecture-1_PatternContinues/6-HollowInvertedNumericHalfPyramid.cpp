
// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

int main()
{

    // Print HollowInvertedNumericHalfPyramid
    // 1 2 3 4 5
    // 2     5
    // 3   5
    // 4 5
    // 5
    int n;
    // n = 5;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            if (row == 0)
            {
                cout << col + 1 << " ";
            }
            else if (col == n - row - 1)
            {
                cout << n << " ";
            }
            else if (col == 0)
            {
                cout << row + 1 << " ";
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