#include <iostream>
using namespace std;

// function declaration
int add(int a, int b);

// Q1 - Sum of even number
int sumOfEvenNumber(int n)
{
    int sum;
    sum = 0;
    for (int i = 2; i <= n; i=i+2)
    {
        cout << i << endl;
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
        return sum;
}
int main()
{

    // int a;
    // it will give the address of this variable stored in memory
    // cout << &a;
    // cout << &a5; // error

    // function call
    // cout << add(3, 4);

// Q1 - Sum of even number function call
int n;
cout << "Enter the number";
cin >> n ;
int sum = sumOfEvenNumber(n);
cout << endl << "Sum of even number to " << n << "th number is "<< sum; 


    return 0;
}

// define function
int add(int a, int b)
{
    return a + b;
}