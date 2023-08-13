#include <iostream>
using namespace std;

int factorial(int n)
{
   int fact = 1;
   for(int i = 1;i<=n; i++){
    fact = fact * i;
   }
    return fact;
}

int main()
{

    //    Q - Find area of circle ( pi r * r)

    int n;
    cin >> n;
    int fact = factorial(n);
    cout << "factorial of " << n << " is " << fact;
   

    return 0;
}
