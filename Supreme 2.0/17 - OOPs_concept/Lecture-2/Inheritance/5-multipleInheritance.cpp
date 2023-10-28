// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

// Base class 1: Class `Mother`
class Mother {
public:
    Mother() {
        cout << "Mother's Constructor called!" << endl;
    }

    void motherFunction() {
        cout << "Function from Mother class." << endl;
    }
};

// Base class 2: Class `Father`
class Father {
public:
    Father() {
        cout << "Father's Constructor called!" << endl;
    }

    void fatherFunction() {
        cout << "Function from Father class." << endl;
    }
};

// Derived class inheriting from both `Mother` and `Father` - This is multiple inheritance
class Child : public Mother, public Father {
public:
    Child() {
        cout << "Child's Constructor called!" << endl;
    }

    void childFunction() {
        cout << "Function from Child class." << endl;
    }
};

int main() {
    // Creating an instance of the `Child` class will call the constructors of all the classes in the hierarchy.
    Child myChild;

    // We can call functions from both base classes as well as the derived class.
    myChild.motherFunction();
    myChild.fatherFunction();
    myChild.childFunction();

    return 0;
}
