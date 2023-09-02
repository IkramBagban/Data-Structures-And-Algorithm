// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <cmath> // Include the cmath library for the pow() function
using namespace std;

// Explanation:
// The decimalToBinary function takes an integer n as input and returns its binary representation as an integer.
// Inside this function:
// binaryNumber is initialized to 0 to store the binary representation.
// i is used as a counter to keep track of the bit position.
// A while loop extracts each bit of the decimal number n one by one:
// int bit = n & 1; extracts the rightmost bit of n using bitwise AND.
// The bit is then added to the binaryNumber at the appropriate position using the pow function and a right shift operation (n = n >> 1) is performed to get the next bit.
// This process continues until n becomes 0.

// Function to convert decimal to binary
int decimalToBinary(int n)
{
    int binaryNumber = 0; // Initialize the binary number to 0
    int i = 0; // Initialize a counter variable for the bit position

    // Loop until the decimal number becomes 0
    while (n > 0)
    {
        int bit = n & 1; // Extract the rightmost bit of n using bitwise AND
        binaryNumber = bit * pow(10, i++) + binaryNumber; // Add the bit to the binary number at the appropriate position
        n = n >> 1; // Right shift n to get the next bit
    }
    cout << endl;

    return binaryNumber; // Return the binary representation as an integer
}

int main()
{
    int n;
    cout << "Enter Decimal Number : ";
    cin >> n; // Input the decimal number to be converted to binary

    int binaryNumber = decimalToBinary(n); // Call the function to convert to binary
    cout << "Binary Number Of " << n << " Is " << binaryNumber; // Display the result

    return 0;
}
