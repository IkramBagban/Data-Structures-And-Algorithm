// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

// Function to calculate 2 raised to the power of 'n'
int pow(int n)
{

    // Base case: 2^0 = 1
    if (n == 0)
        return 1;

    // Recursive case: 2^n = 2 * 2^(n-1)
    // We multiply 2 by the result of pow(n-1) to calculate 2^n
    return 2 * pow(n - 1);
}

int main()
{

    // Print the result of 2^4
    cout << pow(4);

    return 0;
}

// ### Call Stack Explanation
// When we call `pow(4)`, it doesn't immediately give an answer. Instead, it needs to call `pow(3)`, which in turn calls `pow(2)`, and so forth until we hit our base case, `pow(0)`.

// Visualize this like a stack of books. Each time we make a function call, we're placing a new book on top of the stack. Only when we hit our base case can we start removing books (or, in programming terms, returning from function calls) and computing the result.

// Here's a visual representation of the call stack:

// ```
// 1. pow(4)              // Initial call
//    -> return 2*pow(3)

// 2.      pow(3)         // Called by pow(4)
//        -> return 2*pow(2)

// 3.           pow(2)    // Called by pow(3)
//            -> return 2*pow(1)

// 4.                pow(1) // Called by pow(2)
//                 -> return 2*pow(0)

// 5.                     pow(0) // Base case called by pow(1)
//                        -> return 1
// ```
// Now that we've reached the base case, we can begin to "collapse" our stack and compute the result:
// ```
// 5.                     pow(0) returns 1

// 4.                pow(1) returns 2*1 = 2

// 3.           pow(2) returns 2*2 = 4

// 2.      pow(3) returns 2*4 = 8

// 1. pow(4) returns 2*8 = 16
// ```

// ### Detailed Iteration Explanation

// 1. **pow(4) is called:**
//    - Doesn't know the answer directly.
//    - Calls pow(3) and waits for that result.

// 2. **pow(3) is called (by pow(4)):**
//    - Doesn't know the answer directly.
//    - Calls pow(2) and waits for that result.

// 3. **pow(2) is called (by pow(3)):**
//    - Doesn't know the answer directly.
//    - Calls pow(1) and waits for that result.

// 4. **pow(1) is called (by pow(2)):**
//    - Doesn't know the answer directly.
//    - Calls pow(0) and waits for that result.

// 5. **pow(0) is called (base case):**
//    - Knows the answer directly because 2^0 = 1.
//    - Returns 1.

// Now, the results start to propagate back up the call stack:

// 4. **pow(1) (waiting for pow(0)):**
//    - Receives the result of 1 from pow(0).
//    - Computes 2 * 1 = 2.
//    - Returns 2.

// 3. **pow(2) (waiting for pow(1)):**
//    - Receives the result of 2 from pow(1).
//    - Computes 2 * 2 = 4.
//    - Returns 4.

// 2. **pow(3) (waiting for pow(2)):**
//    - Receives the result of 4 from pow(2).
//    - Computes 2 * 4 = 8.
//    - Returns 8.

// 1. **pow(4) (waiting for pow(3)):**
//    - Receives the result of 8 from pow(3).
//    - Computes 2 * 8 = 16.
//    - Returns 16.

// Finally, in `main()`, `pow(4)`'s result, which is 16, gets printed out.