#include <iostream>
using namespace std;

bool check_Even(int number)
{
    if (number % 2 == 0)
    {
        return true;
    }
    return false;
}

int main()
{

    //    Q - Find area of circle ( pi r * r)

    int number;
    cin >> number;
    bool isEven = check_Even(number);
    cout << "Number " << number << " is " << (isEven ? "Even" : "Odd");

    return 0;
}
