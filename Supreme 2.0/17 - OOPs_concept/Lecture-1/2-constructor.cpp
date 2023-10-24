// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

class Student
{
private:
    bool gf; // Private member variable indicating whether the student has a girlfriend

public:
    string name; // Public member variable for student's name.
    int roll_no; // Public member variable for student's roll number.
    int age;     // Public member variable for student's age.

    // Constructors : Constructors are special member functions of a class.They are executed whenever new objects of that class are created.They have the same name as the class and don't return any type, not even void.

    // Default Constructor:
    // A default constructor is a constructor that either has no parameters or
    // if it has parameters, all the parameters have default values.
    // It gets automatically called when objects of the class are declared but not initialized.
    Student()
    {
        cout << "Constructor: Default constructor invoked." << endl;
    }

    // Parameterized Constructor : It is a constructor that accepts one or more parameters
    // A parameterized constructor is a constructor that takes parameters,
    // and is used to provide different values to distinct objects.
    // This will be called when an object of the class is declared and initialized
    // using the specified parameters.
    Student(string _name, int _roll_no, int _age, bool _gf)
    {
        cout << "Constructor: Parameterized constructor invoked (without using 'this' keyword)." << endl;
        name = _name; // Assigning values to the class members
        roll_no = _roll_no;
        age = _age;
        gf = _gf;
    }

    // Another Parameterized Constructor with a different set of parameters.
    // The 'this' keyword in C++ is a pointer that points to the object which
    // invokes the member function (or constructor). Here, 'this' is used
    // because the parameter names are same as the class member names.
    Student(string name, int roll_no, int age)
    {
        cout << "Constructor: Parameterized constructor invoked (using 'this' keyword for clarity)." << endl;
        this->name = name;       // 'this->name' refers to the class member 'name'
        this->roll_no = roll_no; // 'this->roll_no' refers to the class member 'roll_no'
        this->age = age;         // 'this->age' refers to the class member 'age'
    }
};

int main()
{
    // this will call the default constructor
    Student s1;
    s1.name = "Urhan";
    s1.roll_no = 12;
    s1.age = 19;

    cout << "Name Of s1 Student is " << s1.name << endl;
    cout << "rollNo. Of s1 Student is " << s1.roll_no << endl;
    cout << "age Of s1 Student is " << s1.age << endl;

    cout << endl;

    // Creating s2 Student object using the parameterized constructor
    Student s2("ikram", 13, false, 19);
    cout << "Name Of S2 Student is " << s2.name << endl;
    cout << "rollNo. Of S2 Student is " << s2.roll_no << endl;
    cout << "age Of s2 Student is " << s2.age << endl;

    // Note: can't access 'gf' name because 'gf' is private.
    // cout << "is s2 student has gf " << s2.gf<< endl;

    cout << endl;

    // Creating s3 Student object using the parameterized constructor
    Student s3("Bushrah", 14, 18);
    cout << "Name Of S3 Student is " << s3.name << endl;
    cout << "rollNo. Of S3 Student is " << s3.roll_no << endl;
    cout << "age Of S3 Student is " << s3.age << endl;

    cout << endl;

    // Creating an object s4 of the Student class using a parameterized constructor.
    // We're allocating it on the heap, which means s4 will give us the base address.
    Student *s4 = new Student("Muskan", 15, 18);
    // When we allocate an object on the heap, s4 is a pointer that holds the base address.
    // We can access the object's properties using the '->' operator.

    // Let's print the base address of s4.
    cout << "Base Address Of S4 Student is " << s4 << endl;

    // To access the properties of the Student object, we use '->' notation.
    cout << "Name Of S4 Student is " << s4->name << endl;
    cout << "Roll Number Of S4 Student is " << s4->roll_no << endl;
    cout << "Age Of S4 Student is " << s4->age << endl;

    // If you prefer, you can also access properties using the '*' operator and dot notation.
    // This is equivalent to using '->'.
    cout << "Another Way to Access Roll Number Of S4 Student is " << (*s4).roll_no << endl;

    return 0;
}