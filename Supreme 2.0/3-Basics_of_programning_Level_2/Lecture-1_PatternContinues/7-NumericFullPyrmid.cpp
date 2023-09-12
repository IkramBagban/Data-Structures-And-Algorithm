
// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

int main()
{

    // Print Nuneric Full Pyramid
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
        for (int col = 0; col < n; col++)
        {
            if (col<n-(row+1))
            {
                cout <<' ';
            }
        }

        for(int col = 0; col<=n+row;col++){
            if(col<=n/2){
                cout << col+row+1;
            }else{
                cout <<  col+row;
            }
        }

        cout << endl;
    }
    return 0;
}