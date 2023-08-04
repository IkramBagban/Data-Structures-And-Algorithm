#include <iostream>
using namespace std;

int main()
{

    // 1 2 3 4 5
    // 1     4
    // 1   3
    // 1 2
    // 1

    // by ikram
    int n;
    cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n; col++)
    //     {
    //         if (row == 0 )
    //         {
    //             cout << col + 1 << " ";
    //         }else if( col == n-row-1){
    //             cout << n << " ";

            
    //         }else if( col == 0 ){
    //             cout <<  << " ";

    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }


// by lakshay - code helps supreme
 for (int row = 0; row < n; row++)
    {
        for (int col = row+1; col <= n; col++)
        {
            if (col == row+1 || col == n || row == 0)
            {
                cout << col << " ";
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
