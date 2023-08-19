// 1. **The above code uses the Boyer-Moore Voting Algorithm to find the majority element in the given `vector`of integers. Majority element is that element which appears more than n/2 times. However, there is a bug in the code that causes it to return an incorrect result for some inputs. Your task is to identify and fix the bug.  Hint: Incomplete code.**

// #include <iostream>
// #include <vector>

// using namespace std;

// int majorityElement(vector<int>& nums) {
//     int candidate, count = 0;
//     for (int i = 0; i < nums.size(); i++) {
//         if (count == 0) {
//             candidate = nums[i];
//         }
//         if (nums[i] == candidate) {
//             count++;
//         } else {
//             count--;
//         }
//     }
//     return candidate;
// }

// int main() {
//     vector<int> nums = {1, 2, 3, 2, 2, 4, 2};
//     cout << "The majority element is: " << majorityElement(nums) << endl;
//     return 0;
// }


#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int>& nums) {
    int candidate, count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (count == 0) {
            candidate = nums[i];
        }
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    return candidate;
}

int main() {
    vector<int> nums = {1, 2, 3, 2, 2, 4, 2,3};
    cout << "The majority element is: " << majorityElement(nums) << endl;
    return 0;
}