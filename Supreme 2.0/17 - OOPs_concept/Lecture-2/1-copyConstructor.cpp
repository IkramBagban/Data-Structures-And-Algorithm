// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
#include <iostream>
using namespace std;

// Defination Of Copy Constructor : A copy constructor is a special type of constructor in a class that initializes a new object using the values of an existing object. It allows one object to be created as a copy of another object of the same type.

class Demo
{
public:
    int a;
    int b;

    // Default constructor is required when defining a copy constructor.
    // This is because when you create an object without providing any parameters,
    // the default constructor will handle the initialization.
    // So, when the copy constructor is invoked, it relies on the default constructor to create a new object.
    Demo()
    {
        cout << "Default Constructor Called" << endl;
    }

    // Copy constructor for the Demo class.
    // It takes a constant reference to another object of type Demo.
    // 'const' ensures that we do not modify the source object being copied.
    // '&' (reference) is used to prevent unnecessary copying of the source object.
    // Using a reference is more efficient and avoids the overhead of creating a temporary object.
    Demo(const Demo &srcObj)
    {
        cout << "Copy Constructor Called" << endl;

        // Copying data members of source object to the current object.
        // This will make the new object a copy of the source object.
        this->a = srcObj.a; // Copies value of 'a' from source object to this object
        this->b = srcObj.b; // Copies value of 'b' from source object to this object
    }
};

int main()
{
    // Object d1 is created using the default constructor
    Demo d1; // Default constructor is called

    // Assigning values to the data members of d1
    d1.a = 10;
    d1.b = 20;

    // Displaying the sum of a and b of d1
    cout << "Sum of values in D1: " << d1.a + d1.b << endl;

    // Object d2 is created as a copy of d1 using the copy constructor
    Demo d2 = d1; // Copy constructor is called to initialize d2 as a copy of d1

    // Displaying the sum of a and b of d2.
    cout << "Sum of values in D2:" << d2.a + d2.b << endl;

    // Object d3 is created as a copy of d1 using the copy constructor with another syntax
    Demo d3(d1); // This is another way to invoke the copy constructor
}
