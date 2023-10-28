// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
#include <iostream>
using namespace std;

class Demo
{
public:
    int a, b;

    Demo(int a, int b) : a(a), b(b) {}

    // Operator Overloading:
    // In C++, we can redefine or overload most of the built-in operators
    // available in C++. Thus, a programmer can use operators with user-defined
    // types as well. Overloaded operators are functions with a special name: 
    // the keyword "operator" followed by the operator sign that is overloaded. 

    // Overloading the + operator for the Demo class.
    // Instead of creating and returning a new object (which is commonly done in 
    // operator overloading), this version modifies the current object.
    void operator+(const Demo &obj)
    {
        // Adding the values of 'a' and 'b' from the current object (this) with 
        // those of the passed object (obj).
        this->a += obj.a;
        this->b += obj.b;
    }

    // Function to display the values of 'a' and 'b'.
    void display(){
        cout << "a: "<< a<< ", b:" << b << endl;
    }
};

int main()
{
    // Creating an instance (or object) of the 'Demo' class with values 3 and 4.
    Demo d1(3,4);
    // Displaying values of d1.
    d1.display();  // Expected output: "a: 3, b: 4"

    // Creating another instance of the 'Demo' class with values 5 and 6.
    Demo d2(5,6);

    // Using the overloaded + operator to add d2's values to d1.
    // After this operation, d1's values will be modified while d2 remains unchanged.
    d1 + d2;

    // Displaying the updated values of d1 after the addition.
    d1.display();  // Expected output: "a: 8, b: 10"

    return 0;
}
