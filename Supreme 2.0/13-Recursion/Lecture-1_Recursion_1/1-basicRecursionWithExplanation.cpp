// **Recursion** is a technique in programming where a function calls itself in order to solve a problem. Think of it as breaking down a big problem into smaller, more manageable parts until we reach a problem so small that it can be solved easily. This smallest problem is known as the **base case**.

// Let's use the calculation of a factorial as our example. The factorial of a number `n` (denoted as `n!`) is the product of all positive integers less than or equal to `n`. For example, `5!` (factorial of 5) is `5 x 4 x 3 x 2 x 1 = 120`.

// Using recursion, we can represent this as:
// ```
// 5! = 5 x 4!
// 4! = 4 x 3!
// 3! = 3 x 2!
// 2! = 2 x 1!
// 1! = 1
// ```

// Here's the recursive code for calculating the factorial of a number:

// This function calculates the factorial of a given number 'n' using recursion.
int factorial(int n)
{
    // Base case: If n is 0 or 1, the factorial is 1.
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // Recursive case: n! = n x (n-1)!
    // The function calls itself with a reduced value of 'n'.
    return n * factorial(n - 1);
}

// ```
// Let's understand how the **call stack** works for this recursive code:

// When we call `factorial(5)`:
// 1. The function checks if `n` is 0 or 1. Since it's not, it proceeds to call itself with `n-1` (i.e., `factorial(4)`).
// 2. Again, it checks the base case for `factorial(4)`. It's not met, so it calls `factorial(3)`.
// 3. This process continues until `factorial(1)` is called.
// 4. Now, the base case is met. `factorial(1)` returns `1`.
// 5. Each previous call then takes this returned value, multiplies it with its `n`, and returns the result.
// 6. This continues until the original call (`factorial(5)`) returns the final result.

// Here's a visualization of the call stack:
// ```
// factorial(5)
//    |
//    |-- factorial(4)
//           |
//           |-- factorial(3)
//                   |
//                   |-- factorial(2)
//                           |
//                           |-- factorial(1)  // Base case
//                           |
//                   |-- Return 2 x 1 = 2
//                   |
//           |-- Return 3 x 2 = 6
//           |
//    |-- Return 4 x 6 = 24
//    |
// Return 5 x 24 = 120
// ```

// Each time a function calls itself, a new layer is added to the stack. Once the base case is reached, the function begins to return, and the stack starts to "unwind" until the original function call returns the final result.

// Remember, while recursion can be a powerful tool, it can also lead to a **stack overflow** if the base case isn't properly defined or if the recursion goes too deep. Always make sure your recursive solutions have a well-defined base case and won't go too deep for the given problem.