#include <iostream>
using namespace std;

int main()
{

// solid squre patter
    // * * * * * 
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    int n;
    // n = 5;
    cin >> n;
    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < n; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}