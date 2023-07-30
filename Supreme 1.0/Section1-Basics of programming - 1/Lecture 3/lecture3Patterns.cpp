#include <iostream>
using namespace std;
int main()
{

    // // 1) Rectangle patter
    // cout << "Rectangle";
    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 5; col++)
    //     {
    //         cout << "* ";
    //     };
    //     cout << endl;
    // };

    // ------------------------------------------------------------------------------------------------------
    // // 2) Square patter
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // cout << "Square : " << endl;
    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n; col++)
    //     {
    //         cout << "* ";
    //     };
    //     cout << endl;
    // }

    // ------------------------------------------------------------------------------------------------------
    // // 3) Hollow Rectangle
    // cout << "Hollow Rectangle : " << endl;
    // // * * * * *
    // // *       *
    // // * * * * *
    // int rowCount, colCount;
    // cout << "enter Rows : ";
    // cin >> rowCount;
    // cout << "enter Colums : ";
    // cin >> colCount;

    // // Ikram
    // for (int row = 0; row < rowCount; row++)
    // {
    //     if (row == 0 || row == rowCount - 1)
    //     {
    //         for (int col = 0; col < colCount; col++)
    //         {

    //             cout << "* ";
    //         }
    //     }
    //     else
    //     {
    //         for (int col = 0; col < colCount; col++)
    //         {
    //             if (col == 0 || col == colCount - 1)
    //             {

    //                 cout << "* ";
    //             }
    //             else
    //             {
    //                 cout << "  ";
    //             }
    //         }
    //     }

    //     cout << endl;
    // }

    // Babbar (optimized than me)
    // for (int row = 0; row < rowCount; row++)
    //     {
    //         if (row == 0 || row == rowCount-1)
    //         {
    //             for (int col = 0; col < colCount; col++)
    //             {

    //                 cout << "* ";
    //             }
    //         }
    //         else
    //         {

    //             cout << "* ";
    //             for (int col = 0; col < colCount-2 ; col++)
    //             {
    //                 cout << "  ";
    //             }
    //             cout << "* ";
    //         }

    //         cout << endl;
    //     }

    // chat gpt (more optimized)
    //  for (int row = 0; row < rowCount; row++)
    //     {
    //         for (int col = 0; col < colCount; col++)
    //         {
    //             // If it's the first or last row, or the first or last column, print an asterisk (*)
    //             // Otherwise, print a space
    //             if (row == 0 || row == rowCount-1 || col == 0 || col == colCount-1)
    //             {
    //                 cout << "* ";
    //             }
    //             else
    //             {
    //                 cout << "  ";
    //             }
    //         }
    //         cout << endl;
    //     }

    // ------------------------------------------------------------------------------------------------------
    // ------------------------------------------------------------------------------------------------------

    // 4) Half Paramid
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *

    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col <= row; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // ----------------------------------------------------------------------------------------------------

    // // 5) Inverted Half Paramid
    // // Where n = 5
    // // * * * * *
    // // * * * *
    // // * * *
    // // * *
    // // *

    // int n;
    // cin >> n;

    // for (int row = n; row > 0; row--)
    // {
    //     for (int col = row; col > 0; col--)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    //  for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n-row; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // ----------------------------------------------------------------------------------------------------

    // // 6) Numeric Half Paramid
    // // Where n = 5
    // // 1
    // // 1 2
    // // 1 2 3
    // // 1 2 3 4
    // // 1 2 3 4 5

    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col <= row; col++)
    //     {
    //         cout << col + 1 << " ";
    //     }
    //     cout << endl;
    // }

    // ----------------------------------------------------------------------------------------------------

    // // 6) Numeric Inverted Half Paramid
    // // Where n = 5
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1
    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n-row; col++)
    //     {
    //         cout << col + 1 << " ";
    //     }
    //     cout << endl;
    // }

    // ----------------------------------------------------------------------------------------------------

    // // 7) Full Pyramid
    // // Where n = 5
    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *
    // ikram
    // int n;
    // cin >> n;
    // for(int row = 0 ; row< n ; row++){
    //     for(int col = 0; col< n; col++){
    //         if(col < n - (row+1)){
    //             cout << " ";
    //         }else{
    //             cout << "* ";
    //         }

    //     }
    //     cout << endl;
    // }

    // gpt
    // for (int row = 1; row <= n; row++) {
    //     for (int space = 1; space <= n - row; space++) {
    //         cout << " ";
    //     }
    //     for (int col = 1; col <= row; col++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // ----------------------------------------------------------------------------------------------------
    // // 8) Inerted Full Pyramid
    // // Where n = 5
    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *
    // ikram
    int n;
    cin >> n;
    // n = 10;
    for(int row = 0 ; row<=n; row++){
        for(int col = 0 ; col <=n; col++){

            if(col<=row){
                 cout << " " ;
            }else{
                cout << "* ";
            }
        }
                cout << endl;
    }

    // ----------------------------------------------------------------------------------------------------
    // // 9) Numeric Full Pyramid
 

    return 0;
}
