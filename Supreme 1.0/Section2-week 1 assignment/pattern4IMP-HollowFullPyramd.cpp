#include<iostream>
using namespace std;

int main(){


// // Where n = 5
//             *
//           *   *
//         *       *
//       *           *
//     *               *
//   * * * * * * * * * * *
    int n;
    cin >> n;
    // n = 5;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n * 2; col++)
        {
            if (col == n - row || col ==n + row|| (row==n-1 && col > 1) )
            {
                cout << "* ";
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
