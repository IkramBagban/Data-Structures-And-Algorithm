
// question: 
// 75 sort colors : https://leetcode.com/problems/sort-colors/description/

class Solution {
public:
    void sortColors(vector<int>& nums) {

        int index = 0;
        int left = 0;
        int right = nums.size()-1;

        while(index<= right){

            if(nums[index] == 0){
                swap(nums[index], nums[left]);
                left++;
                index++;
            }

            else if(nums[index] == 2){
                swap(nums[index], nums[right]);
                right--;

                // no need to increase index in this condition 
                // index++ // don't do this
            }else{
                index++;
            }

        }
    }
};