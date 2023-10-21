// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize an integer variable 'a' with the value 5.
    int a = 5;

    // Output the value of variable 'a' and its address.
    cout << "Value of a: " << a << endl;
    cout << "Address of Variable 'a' is: " << &a << endl;

    // Declare a pointer to an integer 'ptr' and initialize it with the address of 'a'.
    int *ptr = &a;

    // Output the pointer 'ptr', which contains the address of 'a'.
    cout << "Pointer 'ptr' stores the address: " << ptr << endl;

    // Output the value pointed to by 'ptr', which is the value of 'a'.
    cout << "Value pointed to by 'ptr' is: " << *ptr << endl;

    // Output the address of the pointer 'ptr' itself.
    cout << "Address of the Pointer 'ptr' itself is: " << &ptr << endl;

    return 0;
}
   