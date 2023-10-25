// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

int main()
{

    const int x = 10; // x is constant
    cout << x << endl;
    // initialization can be done.
    // but we cant re-assign value
    // x = 20; // this line will give an error. because we can't re-assign.

    // -------------------------------------

    // const with pointers
    const int *a = new int(2); // const data, not pointers. so we have access where this pointer can point.
    // int const *a = new int(2) // it is the same as above line. bas syntax alag hai
    cout << *a << endl;
    // *a = 20; // can't change the content of the const
    int b = 20;
    a = &b; // pointer itself can be re-assigned. so now a will point at b's address. and at the b address we have value 20. so *a will print 20.
    cout << *a << endl;

    // -------------------------------------

    // const Pointer, not data
    int *const y = new int(2);
    cout << "Y value " << *y << endl;
    *y = 4;                                   // value change hojayengi. kyu k hamne pointer ko const kiya hai uski value ko ni.
    cout << "Y value Changed " << *y << endl; // This will print 4.
    int y2 = 20;
    // y = &y2; // Nahi Chalenga. we can't change pointer.

    // -------------------------------------

    // const pointer and const data
    const int *const z = new int(10);
    cout << "Z value" << z << endl;
    int z2 = 30;
    // z = &z2; // Nahi chalenga. na ham pointer change kar sakte. na uska data.

    return 0;
}