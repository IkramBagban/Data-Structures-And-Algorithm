// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

int main()
{

    // Full Pyramid
    //      *
    //     * *
    //    * * *
    //   * * * *
    //  * * * * *

    int n = 5;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << " ";
        }
        for (int col = 0; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}