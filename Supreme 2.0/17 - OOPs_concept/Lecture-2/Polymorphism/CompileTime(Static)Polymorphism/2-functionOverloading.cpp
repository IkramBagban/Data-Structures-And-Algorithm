// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

// Class definition for Demo.
class Demo
{
public:
    // Function overloading allows us to have multiple functions with the same name
    // in the same scope, but with different numbers or types of parameters.

    // This is the 1st overloaded version of the sum function.
    // It takes two integers as parameters.
    int sum(int a, int b)
    {
        cout << "1st Sum Function Called" << endl;
        return a + b;
    }

    // This is the 2nd overloaded version of the sum function.
    // It takes three integers as parameters.
    int sum(int a, int b, int c)
    {
        cout << "2nd Sum Function Called" << endl;
        return a + b + c;
    }

    // Third overloaded version of the 'sum' function.
    // This function takes two double values as parameters.
    // Note: The number of parameters is same as the first version,
    // but their types are different, which allows this valid overload.
    // Returns: The sum of the two double values.
    double sum(double a, double b)
    {
        cout << "3rd Sum Function Called" << endl;
        return a + b;
    }
};

int main()
{
    // Creating an object of the 'Demo' class.
    Demo d1;

    // 1st sum function with 2 integer parameter
    cout << d1.sum(2, 3) << endl;

    // 2nd sum function with 3 integer parameter

    cout << d1.sum(2, 3, 4) << endl;

    // 3rd sum function with 2 double type parameter

    cout << d1.sum(2.3, 3.4) << endl;

    return 0;
}
