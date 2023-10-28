// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

// Multilevel Inheritance:
// In multilevel inheritance, a derived class is created from another derived class. It's like a chain of inheritance.

// Here's a simple analogy: If you consider Grandfather -> Father -> Son, where Father inherits from Grandfather and Son inherits from Father, then Son has traits/features of both Father and Grandfather. This is multilevel inheritance.

//  [Base]
//     |
//     |
//  [Middle]
//     |
//     |
// [Derived]

#include <iostream>
using namespace std;

// Base class: Grandfather
class Grandfather
{
public:
    // Constructor of the Grandfather class
    Grandfather()
    {
        cout << "Grandfather's Constructor called!" << endl;
    }

    // Function specific to the Grandfather class
    void grandfatherFunction()
    {
        cout << "Function from Grandfather class." << endl;
    }
};

// First level of inheritance: Father class derived from Grandfather
class Father : public Grandfather
{
public:
    // Constructor of the Father class
    // It automatically calls the Grandfather's constructor first before executing its own body
    Father()
    {
        cout << "Father's Constructor called!" << endl;
    }

    // Function specific to the Father class
    void fatherFunction()
    {
        cout << "Function from Father class." << endl;
    }
};

// Second level of inheritance: Son class derived from Father
// This makes the inheritance multilevel as Son indirectly inherits from Grandfather too
class Son : public Father
{
public:
    // Constructor of the Son class
    // It automatically calls the Father's constructor first, which in turn calls the Grandfather's constructor
    Son()
    {
        cout << "Son's Constructor called!" << endl;
    }

    // Function specific to the Son class
    void sonFunction()
    {
        cout << "Function from Son class." << endl;
    }
};

int main()
{
    // Creating an instance of the Son class will lead to a chain of constructor calls: Grandfather -> Father -> Son
    Son mySon;

    // Due to the multilevel inheritance, mySon object can access functions from all three classes
    mySon.grandfatherFunction();
    mySon.fatherFunction();
    mySon.sonFunction();

    return 0;
}
