// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

//           [Base]
//           /    \
//          /      \
//    [Derived1] [Derived2]

#include <iostream>
using namespace std;

// Base class: Parent
class Parent
{
private:
    // Private member of the Parent class
    int privateMember = 1;

protected:
    // Protected member of the Parent class
    int protectedMember = 2;

public:
    // Public constructor of the Parent class
    Parent()
    {
        cout << "Parent's Constructor called!" << endl;
    }

    // Public function to access the private member of the Parent class
    void showPrivateMember()
    {
        cout << "Private Member from Parent class: " << privateMember << endl;
    }
};

// Derived class: Son inheriting from Parent
class Son : public Parent
{
public:
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

// Another derived class: Daughter inheriting from Parent
class Daughter : protected Parent
{
public:
    Daughter()
    {
        cout << "Daughter's Constructor called!" << endl;
    }

    // Function specific to the Daughter class
    void daughterFunction()
    {
        cout << "Function from Daughter class." << endl;
    }

    // Function to access the protected member of the Parent class
    void showProtectedMember()
    {
        cout << "Protected Member from Parent class (accessed in Daughter): " << protectedMember << endl;
    }
};

int main()
{
    // Creating an instance of the Son class
    Son mySon;
    mySon.showPrivateMember(); // Accessing public function from Parent

    cout << "\n";

    // Creating an instance of the Daughter class
    Daughter myDaughter;
    myDaughter.showProtectedMember(); // Accessing function that showcases protected member access

    return 0;
}
