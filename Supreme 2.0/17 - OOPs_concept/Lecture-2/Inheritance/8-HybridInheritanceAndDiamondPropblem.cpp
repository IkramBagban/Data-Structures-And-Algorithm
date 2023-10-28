// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban


#include <iostream>
using namespace std;

class Person
{
public:
    void walk()
    {
        cout << "Walking..." << endl;
    }
};

// Using the virtual keyword here to avoid the diamond problem in the Professor class.
class Teacher : virtual public Person
{
public:
    void teach()
    {
        cout << "teaching..." << endl;
    }
};

// Using the virtual keyword here too to avoid the diamond problem.
class Researcher : virtual public Person
{
public:
    void research()
    {
        cout << "Researching..." << endl;
    }
};

// Professor inherits from both Teacher and Researcher. Without the virtual keyword, 
// it would inherit two copies of the 'walk' method, one from each parent, leading to 
// ambiguity. The use of virtual inheritance ensures only one 'walk' method is inherited.
class Professor : public Researcher, public Teacher
{
public:
    void bore()
    {
        cout << "Boring..." << endl;
    }
};

int main()
{
    Professor p1;
    p1.bore();

    // p1.walk();
    // Without virtual inheritance, this call to 'walk' would be ambiguous since 
    // Professor would inherit two versions of 'walk' - one from Teacher and 
    // another from Researcher. This ambiguity is commonly known as the diamond problem.
    // There are two main ways to resolve this:
    // 1) Using scope resolution.
    // 2) Using virtual inheritance.

    // 1) Scope Resolution: This specifies which version of the 'walk' method to call.
    p1.Teacher::walk();
    p1.Researcher::walk();

    // 2) 'virtual' Keyword: By using virtual inheritance (as done in the Teacher and 
    // Researcher classes above), we ensure that only one instance of the 'walk' method 
    // is inherited, preventing any ambiguity.
    p1.walk();

    return 0;
}
