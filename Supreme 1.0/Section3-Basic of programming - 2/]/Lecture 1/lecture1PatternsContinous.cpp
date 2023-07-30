#include <iostream>
using namespace std;

int main()
{

    // 1) hollow diamong

    //     *
    //    * *
    //   *   *
    //  *     *
    // *       *
    // *       *
    //  *     *
    //   *   *
    //    * *
    //     *
    int n = 5;

    // ikram
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n * 2; col++)
    //     {
    //         if (col == n - (row) || col == n + (row) )
    //         {
    //             cout << "*";
    //         }

    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // for (int row = 0; row < n; row++)
    // {

    //     for (int col = 0; col < n * 2; col++)
    //     {
    //         if (col == row+1 || col == (n*2)-(row+1))
    //         {
    //             cout << "*";
    //         }

    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // // -----------------
    // Babbar
    // for (int row = 0; row < n; row++)
    // {

    //     for (int col = 0; col < n - row - 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < 2 * row + 1; col++)
    //     {
    //         if (col == 0 || col == 2 * row)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // for (int row = 0; row < n; row++)
    // {
    // for (int col = 0; col < row; col++)
    // {
    //     cout << " ";
    // }
    // for (int col = 0; col < 2*n - 2*row-1; col++)
    // {
    //     if(col==0|| col==2*n-2*row-2){

    //     cout << "*";
    //     }else{
    //      cout << " ";
    // }

    // }
    //  cout << endl   ;
    // }

    //---------------------------------------------------------------------------

    // ikram
    // Fancy Pattern #2
    // 1
    // 2*2
    // 3*3*3
    // 4*4*4*4
    // 4*4*4*4
    // 3*3*3
    // 2*2
    // 1
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < 2*row-1; col++)
    //     {
    //         if(col %2 == 0)
    //         cout << row;
    //         else cout << "*";
    //     }
    //     cout << endl;

    // }
    //  for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n-(2*row)+2; col++)
    //     {
    //         if(col %2 == 0)
    //         cout << n-row-1;
    //         else
    //         cout << "*";
    //     }
    //     cout << endl;

    // }

    //---------------------------------------------------------------------------
    // A
    // A B A
    // A B C B A
    // A B C D C B A
    // A B C D E D C B A

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row; col++)
        {
            int ans = col +1 ;
            
            cout << ;
        }
        for(int col = row-1 ; col >0;col--){
            cout << col + 'A';
        }
        cout << endl;
    }
        return 0;
    }
