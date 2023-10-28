// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

class Demo
{
public:
    int sum(int a, int b)
    {
        cout << "1st Sum Function Called"<<endl;
        return a + b;
    }
    int sum(int a, int b, int c)
    {
        cout << "2nd Sum Function Called"<<endl;
        return a + b + c;
    }
    double sum(double a, double b, double c)
    {
        cout << "3rd Sum Function Called"<<endl;
        return a + b + c;
    }
};

int main()
{
    Demo d1;
    cout << d1.sum(2,3) << endl;
    cout << d1.sum(2,3,4) << endl;
    cout << d1.sum(2.3,3.4) << endl;
    return 0;
}