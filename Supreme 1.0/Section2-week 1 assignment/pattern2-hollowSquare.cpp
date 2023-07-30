#include <iostream>
using namespace std;

int main()
{

    // Hollow squre patter
    // * * * * *
    // *       *
    // *       *
    // *       *
    // * * * * * 
    int n;
    n = 5;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {

    //     for (int col = 0; col < n; col++)
    //     {
    //         if(row == 0 || row == n-1 || col == 0 || col == n-1){

    //         cout << "* ";
    //         }else{
                
    //              cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

        for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < n; col++)
        {
            if( col == 0 || col == n-(row+2) || (col+1)== (row)){

            cout << "* ";
            }else{
                
                 cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}