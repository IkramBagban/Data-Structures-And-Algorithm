// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

int factorial(int n) {
    // Base cases: These are conditions under which the function stops calling itself.
    // In the case of factorial, the factorial of 1 and 0 is defined as 1.
    
    // If n is 0 or 1, the factorial is 1.
    if (n == 0 || n == 1)
    {
        return 1;
    }

    // Recursive call:
    // We break the problem into a smaller version of itself.
    // Here, we get the factorial of n-1 (a number one less than n).
    // The logic is that factorial of n is n multiplied by factorial of n-1.
    // We store the result of this recursive call in the variable recursionKaAns.
    int recursionKaAns = factorial(n-1);

    // Processing step:
    // Now, we process the result of our recursive call to get the result for the current call.
    // As explained earlier, factorial of n is n multiplied by factorial of n-1.
    // Hence, we multiply n with recursionKaAns to get our answer for the current call.
    int finalAns = n * recursionKaAns;

    // Return the final computed answer for this function call.
    return finalAns;
}

int main() {
    // Test the function by finding the factorial of 5.
    // This will invoke our recursive factorial function and print the result.
    cout << "Factorial of 5 is: " << factorial(4) << endl;
    return 0;
}
