// // Author: Ikram Bagban
// // Email: bagbanikram@gmail.com
// // GitHub: https://github.com/ikrambagban

// #include <iostream>
// using namespace std;

// int main()
// {

//     // Full Pyramid
    //      *
    //     * *
    //    *   *
    //   *     *
    //  * * * * *

//     int n = 5;
//     for (int row = 0; row < n; row++)
//     {
//         // for (int col = 0; col < n - row-1; col++)
//         for (int col = 0; col < n+row; col++)
//         {
//             if(row==n-1|| col == n-row-1 ||col==n+row -1  )
//             cout << "*";
//             else{
//                 cout << " ";
//             }
//         }
//         // for (int col = 0; col < n; col++)
//         // {
//         //     if(col==0|| row==n-1) //Not Solved
//         //     cout << "* ";
//         //     else if(col==2*row-1 )
//         //     cout << "*";
//         //     else cout << " ";
//         // }
//         cout << endl;
//     }

//     return 0;
// }





#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    // Outer loop for rows
    for (int row = 1; row <= n; row++) {
        // First inner loop for spaces
        for (int space = 1; space <= n - row; space++) {
            cout << " ";
        }

        // Second inner loop for stars and spaces
        for (int star = 1; star <= 2 * row - 1; star++) {
            if (star == 1 || star == 2 * row - 1 || row == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        // Move to the next line for the next row
        cout << endl;
    }

    return 0;
}
