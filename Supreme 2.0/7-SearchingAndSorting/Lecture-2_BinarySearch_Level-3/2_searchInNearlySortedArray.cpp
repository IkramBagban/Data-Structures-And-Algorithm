// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
            return mid;
        else if (mid+1 <= end && nums[mid + 1] == target)
            return mid + 1;
        else if (mid-1 >= 0 && nums[mid - 1] == target)
            return mid - 1;
        else if (target < nums[mid])
        {
            end = mid - 2;
        }
        else
        {
            start = mid + 2;
        }
    }

    return -1;
}

int main()
{

    // vector<int> nums = {5,10,20,30, 50, 40, 70, 60};
    // int target = 0;

    // vector<int> nums = {5, 10, 15, 20, 25};
    // int target = 15 ;

    vector<int>nums = {10, 5};
    int target = 5;

    // vector<int>nums =  {5, 10, 15, 20};
    // int target = 25;

    // vector<int>nums =  {5, 10, 15, 20, 25};
    // int target = 25;

    // vector<int>nums =  {5, 10, 15, 20, 25};
    // int target = 5;


    int targetIndex = search(nums, target);
    cout << targetIndex << endl;

    return 0;
}