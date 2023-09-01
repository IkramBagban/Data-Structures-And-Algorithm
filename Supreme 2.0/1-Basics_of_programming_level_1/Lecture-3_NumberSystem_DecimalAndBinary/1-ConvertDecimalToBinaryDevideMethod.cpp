// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <cmath>
using namespace std;
int decimalToBinary(int n)
{

    int binaryNumber = 0;
    int i = 0;

    while (n > 0)
    {
        int bit = n % 2;

        binaryNumber = bit * pow(10, i) + binaryNumber;

        n = n / 2;
        i++;
    }

    return binaryNumber;
}
int main()
{

    int n;
    cout << "Enter Decimal Number : ";
    cin >> n;

    int binaryNumber = decimalToBinary(n);
    cout << "Binary Number Of " << n << " Is " << binaryNumber;

    return 0;
}