#include <iostream>
using namespace std;

int main()
{

    // Hollow Inverted Half pyramid
    
    int n;
    // n = 5;
    cin >> n;
    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < n; col++)
        {
            if(row == 0 || col == 0||col == n-row -1){

            cout << "* ";
            }else{
                 cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}