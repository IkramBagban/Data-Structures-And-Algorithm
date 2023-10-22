// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

// Function to compute the nth Fibonacci number
int fibonacci(int n)
{
    // Base case: If n is 0, the Fibonacci number is 0
    if (n == 0)
        return 0;

    // Base case: If n is 1, the Fibonacci number is 1
    if (n == 1)
        return 1;

    // Recursive case:
    // The nth Fibonacci number is the sum of the (n-1)th and (n-2)th Fibonacci numbers
    int ans = fibonacci(n - 1) + fibonacci(n - 2);

    return ans; // Return the computed Fibonacci number
}

int main()
{
    int num = 4;
    // Print the 4th Fibonacci number
    cout << "fibonacci of " << num << "==> " << fibonacci(num);
    return 0;
}
// ```
// ### Call Stack Explanation for fibonacci(4)

// 1. **fibonacci(4) is called:**
//     - It doesn't know the answer directly, so it:
//       - Calls fibonacci(3)
//       - Waits for the result
//       - Calls fibonacci(2)
//       - Waits for the result
//       - Sums the two results

// 2. **fibonacci(3) is called (by fibonacci(4)):**
//     - Calls fibonacci(2)
//     - Waits for the result
//     - Calls fibonacci(1)
//     - fibonacci(1) knows the answer is 1, so it returns 1 immediately
//     - After receiving results, computes 1 (from fibonacci(1)) + 1 (from fibonacci(2)) = 2
//     - Returns 2 to fibonacci(4)

// 3. **fibonacci(2) is called (by both fibonacci(3) and fibonacci(4)):**
//     - Calls fibonacci(1)
//     - fibonacci(1) knows the answer is 1, so it returns 1 immediately
//     - Calls fibonacci(0)
//     - fibonacci(0) knows the answer is 0, so it returns 0 immediately
//     - Computes 1 (from fibonacci(1)) + 0 (from fibonacci(0)) = 1
//     - Returns 1

// Now, let's visualize the call stack:

// ```
// 1. fibonacci(4)
//    -> fibonacci(3) + fibonacci(2)

// 2.     fibonacci(3)
//        -> fibonacci(2) + fibonacci(1)

// 3.          fibonacci(2)
//             -> fibonacci(1) + fibonacci(0)

// 4.               fibonacci(1) -> returns 1
// 5.               fibonacci(0) -> returns 0

// 3.          fibonacci(2) -> returns 1 + 0 = 1

// 2.     fibonacci(3) -> returns 1 + 1 = 2

// 1. fibonacci(4) -> returns 2 + 1 = 3
// ```

// Finally, in `main()`, the result of `fibonacci(4)` is 3, which gets printed out.

// Note: This implementation is not efficient for larger values of `n` because it re-computes the Fibonacci values multiple times. For example, `fibonacci(2)` is called twice. There are better algorithms, like the memoized version, that can compute Fibonacci numbers more efficiently.