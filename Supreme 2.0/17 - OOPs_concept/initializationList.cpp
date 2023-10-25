// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

class ABC
{
    int a, b;
    const int c; // 'const' member variable, its value must be initialized when an object is created and cannot be changed thereafter

public:
    // constructor that attempts to assign values in the traditional way
    // ABC(int _a, int _b, int _c) {
    //     a = _a;
    //     b = _b;
    //     // c = _c; Can't assign a const value after declaration. This will lead to a compilation error.

    // }

    // Constructor using an initialization list
    // Initialization lists are the proper way to initialize const member variables, member structures, or classes that do not have a default constructor.
    // This is because once the body of the constructor begins executing, all member variables have already been initialized.
    // So, if you don't set the value of 'const' member variable in the initialization list, you'll get a compilation error.
    ABC(int _a, int _b, int _c) : a(_a), b(_b), c(_c)
    {
        cout << "Initialization List constructor Called." << endl;
    }

    void display()
    {
        cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
    }
};

int main()
{
    ABC a1(1, 2, 3); // Object creation with parameters, which calls the constructor with an initialization list
    // For demonstration, display the values
    a1.display(); // Outputs: a: 1, b: 2, c: 3

    return 0;
}
