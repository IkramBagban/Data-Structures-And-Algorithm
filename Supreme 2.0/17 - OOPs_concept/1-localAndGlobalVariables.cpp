// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

// Global Variable:
// A global variable is a variable that is declared outside of all functions in a program.
// It is accessible from any function or block in the program, and its value can be changed and used throughout the entire program's execution.
// Its lifetime extends for the duration of the program, meaning it remains in memory until the program terminates.

// Local Variable:
// A local variable is a variable that is declared within a function or a block.
// Its scope is limited to the function or block in which it is declared, meaning it can only be accessed and used within that specific function or block.
// Its lifetime is limited to the time the function or block is executing. Once the function completes its execution, the local variable is destroyed.

int x = 2; // GLOBAL VARIABLE: This variable is declared outside any function, making it global.

void fun()
{
    int x = 60;        // LOCAL VARIABLE: This variable 'x' is local to the function 'fun' and hides the global variable 'x' within this function.
    cout << x << endl; // This will print the local 'x' which has a value of 60.

    ::x = 40;            // Using the scope resolution operator (::) to access the GLOBAL variable 'x' and change its value to 40.
    cout << ::x << endl; // This will print the global 'x', now having a value of 40.
}

int main()
{
    ::x = 4;    // Changing the value of the GLOBAL variable 'x' to 4.
    int x = 20; // LOCAL VARIABLE: This 'x' is local to the main function and hides the global variable 'x' within main.

    // These lines are commented out, but if executed:
    cout << x << endl;   // This would print the local 'x' in main, which has a value of 20.
    cout << ::x << endl; // This would print the global 'x', which has a value of 4.

    {
        int x = 50; // LOCAL VARIABLE: This 'x' is local to this block of code and hides both the global 'x' and the 'x' local to main.

        // int x = 44;        // ERROR: This line will produce a compile-time error since a variable 'x' is already defined in this scope.

        cout << x << endl; // If the above line was corrected, this would print the 'x' local to this block, with a value of 50.
    }

    cout << x << endl;   // This will print the 'x' local to main, which has a value of 20.
    cout << ::x << endl; // This will print the global 'x', which currently has a value of 40 since it was changed in the 'fun' function.

    fun(); // Calling the 'fun' function which will display its local 'x' and the global 'x'.

    return 0;
}
