// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

class ABC
{
public:
    int a; // A regular member variable. Each object of the class will have its own copy.
    
    // Static member variables
    // -------------------------
    // Static members belong to the class itself, not to any specific instance of the class.
    // This means there's only one copy of these variables, regardless of how many objects we create.
    static int b, c;

    // Static member function
    // -------------------------
    // A static function can access only static data members of a class, not the regular ones.
    // It's associated with the class, not any specific instance of the class.
    static void print()
    {
        // cout << a << endl; // Error: Can't access non-static members from a static function.
        cout << "B: " << b << ", C: " << c << endl; // Correct: Accessing static members.
        cout << "I am in a static function" << endl;
    }
};

// Defining (allocating memory for) static members outside the class.
// It's necessary to define them outside to allocate memory.
int ABC::b;
int ABC::c;

int main()
{
    // Accessing and modifying static members directly using the class name.
    // No need to create an object of the class.
    ABC::b = 10;
    ABC::c = 20;

    // Calling the static function directly using the class name.
    ABC::print();

    // For demonstration, showing how static variables are shared across instances
    ABC obj1, obj2;
    obj1.b = 30;
    cout << "Value of obj2.b after modifying obj1.b: " << obj2.b << endl; // Will print 30, showing the shared nature of static variables.

    return 0;
}
