// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

// Head Recursion: Recursive call happens at the beginning of the function, and it performs some operations before the call.
void headRecursion(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }

    // recursive call
    headRecursion(n - 1);

    // processing (printing) after the recursive call, which makes this head recursion
    cout << n << " ";
}

// Tail Recursion: Recursive call is the last operation in the function, and there are no additional operations after the call. It's more efficient for some programming languages.
void tailRecursion(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }

    // processing (printing) before the recursive call, which makes this tail recursion
    cout << n << " ";

    // recursive call
    tailRecursion(n - 1);
}

int main()
{
    cout << "Head Recursion: ";
    headRecursion(5);
    cout << endl;

    cout << "Tail Recursion: ";
    tailRecursion(5);
    cout << endl;

    return 0;
}
