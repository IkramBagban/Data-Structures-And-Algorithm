// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
#include <iostream>
using namespace std;

// Class Definition:
// A class in C++ is a user-defined type or data structure declared with keyword class
// that has data and functions (also called member variables and member functions) 
// as its members whose access is governed by the associated access specifiers.
class Student
{
    // Access Modifiers:
    // private: This keyword is an access specifier. Data members and member functions 
    // declared under 'private' are not accessible outside of the class. Only member functions 
    // of that class can access the private data members and member functions.
    private:
        bool gf;  // Represents whether the student has a girlfriend or not.

    // public: Member variables or member functions declared under 'public' are accessible 
    // from outside the class.
    public:
        string name;  // Name of the student
        int roll_no;  // Roll number of the student
        int age;      // Age of the student
        int grade;    // Grade of the student

    // Member Function (or Behavior):
    // A member function of a class is a function that has its definition or its 
    // prototype within the class definition similar to any other variable. 
    void study()
    {
        cout << name << " Is Studying" << endl;
    }
};



int main()
{
    // Object Creation:
    // An object is an instance of a class. When a class is defined, only the specification 
    // for the object is defined; no memory or storage is allocated for it. Here, 's1' is an object of the 'Student' class.
    Student s1;


    // Assigning values to public members of the object:
    s1.name = "Ikram";
    s1.roll_no = 101;  // Let's say roll number is 101
    s1.age = 20;       // Let's say age is 20
    s1.grade = 12;     // Let's say grade is 12th

    // Printing the values of the properties:
    cout << "Name Of the s1 Student is " << s1.name << endl;
    cout << "Roll No. of the s1 Student is " << s1.roll_no << endl;
    cout << "Age of the s1 Student is " << s1.age << " years" << endl;
    cout << "Grade of the s1 Student is " << s1.grade << "th" << endl;

    // Size of Class and Padding:
    // Memory in computers is organized in a hierarchical manner, with the smallest addressable unit being a byte.
    // However, for performance reasons, the computer's hardware (specifically, the memory subsystem) 
    // often reads memory in chunks larger than a byte, like words or double words.
    //
    // To ensure that these chunks can be read efficiently, the data should be aligned in memory 
    // according to its size. For example, a 4-byte integer should start at a memory address that's a 
    // multiple of 4. This is where padding comes in.
    //
    // Consider a simple class:
    //
    // class Example {
    //     char c;  // 1 byte
    //     int i;  // 4 bytes
    // };
    //
    // In this example, after the char 'c', 3 bytes of padding might be added before 'i' to ensure 
    // that 'i' starts at a memory address that's a multiple of 4. This would make the size of the 'Example' 
    // class not 5, but 8 bytes. Note that padding might not always be added, and it's platform/compiler-specific.
    //
    // In the case of the 'Student' class, similar padding might be added due to the data types used, 
    // making its size potentially larger than the simple sum of its member sizes.
    cout << "Size Of The Class In Byte Is " << sizeof(s1) << endl;


    return 0;
}
