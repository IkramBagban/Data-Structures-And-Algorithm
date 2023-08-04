/*

Set kth bit ( https://practice.geeksforgeeks.org/problems/set-kth-bit3724/1 ) GeeksForGeeks
Given a number N and a value K. From the right, set the Kth bit in the binary representation of N. The position of Least Significant Bit(or last bit) is 0, the second last bit is 1 and so on. 

Example 1:

Input:
N = 10 
K = 2
Output:
14
Explanation:
Binary representation of the given number
10 is: 1 0 1 0, number of bits in the 
binary reprsentation is 4. Thus 2nd bit
from right is 0. The number after changing
this bit to 1 is: 14(1 1 1 0).
Example 2:

Input:
N = 15 
K = 3
Output:
15
Explanation:
The binary representation of the given
number 15 is: 1 1 1 1, number of bits
in the binary representation is 4. Thus
3rd bit from the right is 1. The number
after changing this bit to 1 is
15(1 1 1 1).
Your Task:  
You don't need to read input or print anything. Your task is to complete the function setKthBit() which takes two integer N and K as input parameter and returns an integer after setting the K'th bit in N.

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 109
0 <= K < X, where X is the number of bits in the binary representation of N.


*/

class Solution
{
public:
    int setKthBit(int N, int K)
    {
        // Write Your Code here
        return N | (1<<K);
    }
    
};