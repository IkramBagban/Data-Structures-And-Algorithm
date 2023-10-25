// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// question Link : https://leetcode.com/problems/climbing-stairs/

// Not Passed all the test cases. because i am doing this question using recursion. and it is taking so much time. but as i am learning recursion that's why i am using it for this question. but later i'll use most optimized approach

class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        if(n==2) return 2;

        int ans = climbStairs(n-1) + climbStairs(n-2);
        return ans;
        
    }
};