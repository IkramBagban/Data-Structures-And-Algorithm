// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

// Base Class 
class Base
{
public:
    int a;
    int b;

    // Parameterized constructor of the Base class
    Base(int a, int b)
        : a(a), b(b) // Initializer list to initialize the member variables
    {
        cout << "Base Constructor Called" << endl;
    }

    // A method to print the values of a and b
    void print()
    {
        cout << "a: " << a << ", b:" << b << endl;
    }
};

// Child class that inherits from the Base class
class Child : public Base
{
public:
    // Constructor of the Child class
    Child(int a, int b)
        : Base(a, b) // Calling the Base class's constructor from the Child's constructor
                     // This is crucial because Child class doesn't have its own 'a' and 'b'.
                     // They are inherited from Base. So, to initialize them, we need
                     // to call the Base class's constructor.
    {
        cout << "Child Constructor Called" << endl;
    }

    // A method specific to the Child class
    void childMethod()
    {
        cout << "Child Method Called" << endl;
    }
};

int main()
{
    // When we create an object of the Child class, it will first
    // call the Base class's constructor (because of the call in the Child's constructor)
    // and then the Child class's constructor.
    // We can access base class public and protected methods, and properties in derived class.
    Child c1(3, 4);
    c1.print();

    Base b1(2, 4);
    b1.print();

    return 0;
}
