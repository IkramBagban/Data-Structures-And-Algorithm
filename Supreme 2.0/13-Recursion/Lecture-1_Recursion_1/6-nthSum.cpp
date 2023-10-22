// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

// Function to compute the sum of numbers from 1 to n
int sum(int n)
{
    // Base case: If n is 1, the sum is 1
    if (n == 1)
        return 1;

    // Base case: If n is 0, the sum is 0
    if (n == 0)
        return 0;

    // Recursive case:
    // The sum of numbers up to n is the number n plus the sum of numbers up to (n-1)
    int ans = n + sum(n - 1);
    
    return ans; // Return the computed sum
}

int main()
{
    // Print the sum of numbers from 1 to 5
    cout << sum(5);
    return 0;
}
// Explanation:
// The function sum calculates the sum of all integers from 1 to 
// For example, if
// n is 5, it calculates:
// 5+4+3+2+1=15