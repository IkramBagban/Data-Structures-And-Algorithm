// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

class Student
{
private:
    // Private data members (attributes)
    string name;  
    int age;

public:
    // Getter (or accessor) for the 'name' attribute
    // A getter allows controlled access to a private attribute's value without exposing the attribute itself.
    string getName()
    {
        return name;
    }

    // Setter (or mutator) for the 'name' attribute
    // A setter allows controlled modification of a private attribute's value.
    void setName(string name)
    {
        this->name = name;  // 'this->' is used to distinguish between the member variable and the parameter 'name'
    }

    // Getter for the 'age' attribute
    int getAge()
    {
        return age;
    }

    // Setter for the 'age' attribute
    void setAge(int age)
    {
        this->age = age;
    }

    // A member function to print the details of the student
    void printDetail()
    {
        cout << "student name is " << name << " and age is " << age << endl;
    }
};

int main()
{
    Student s1;  // Creating an instance of the Student class

    // Direct access to the private attributes 'name' and 'age' would result in compilation errors.
    // Hence, the below two lines are commented out.
    // s1.name = "sultan"; // can't access this.
    // s1.age = 19;       // can't access this.

    // Using setters to set values for the attributes of the instance 's1'
    s1.setName("sultan");
    s1.setAge(19);

    // Using getters to retrieve and display values of the attributes of the instance 's1'
    cout << "student name is " << s1.getName() << " and age is " << s1.getAge() << endl;

    return 0;
}

/*
 * About Getters and Setters:
 * - Getters and setters are member functions that allow controlled access to an object's attributes.
 * - They are especially useful when you want to encapsulate or protect an object's state from being accessed directly.
 * - By using getters and setters, you can implement validation, logging, or any other desired behavior whenever an attribute is accessed or modified.
 * - It is considered a good practice in object-oriented programming to encapsulate an object's attributes and expose them only through appropriate getters and setters.
 */
