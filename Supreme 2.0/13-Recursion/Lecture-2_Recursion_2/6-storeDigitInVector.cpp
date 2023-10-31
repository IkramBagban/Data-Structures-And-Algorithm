// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <vector>
using namespace std;

/*
Question:
Given a number, store each of its digits separately in a vector.

For example:
For the number 2301, the vector should contain: 2, 3, 0, 1
*/

void storeDigit(int num, vector<int> &v)
{
    // Base condition: If the number is 0, end the recursion.
    if (num == 0)
    {
        return;
    }

    // Extract the last digit of the number using the modulo operation.
    // For example: If num is 1234, then num % 10 would result in 4.
    int digit = num % 10;

    // Remove the last digit from the number using integer division.
    // For example: If num is 1234, then num / 10 would reduce it to 123.
    // This is because integer division truncates the decimal, effectively removing the last digit.
    num = num / 10;

    // Recursively call the function with the reduced number.
    storeDigit(num, v);

    // After coming back from the recursive call, store the extracted digit in the vector.
    v.push_back(digit);
}

int main()
{

    int num = 2301;

    // Vector to store the individual digits.
    vector<int> v;

    // Call The storeDigit Function.
    storeDigit(num, v);

    // Displaying The Digits
    for (auto digit : v)
    {
        cout << digit << " ";
    }

    return 0;
}
