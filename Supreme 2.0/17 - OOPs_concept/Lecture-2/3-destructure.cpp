// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

class Demo
{
public:
    int a;
    int b;
    int *c;

    Demo(int a, int b){
        this->a = a;
        this->b = b;
        this->c = new int(10);
    }

    ~Demo(){
        cout << "Destructure Called" << endl;
        delete c;
    }
};

int main()
{
    {
    Demo d1(2,3);
    cout << "a: " << d1.a << ", b: "  << d1.b  << endl;
    cout << "address of c: " << d1.c  << ", Value Of c: " << *d1.c<< endl;
    }

    Demo d2(4,5);
    cout << "D2 Instance" << endl;

    return 0;
}