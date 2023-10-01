// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// Question Link : https://leetcode.com/problems/minimum-time-difference/



class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> ans;

        // Step 1: Convert each time point to minutes and store in 'ans'
        for (int i = 0; i < timePoints.size(); i++) {
            int hour = stoi(timePoints[i].substr(0, 2));
            int minute = stoi(timePoints[i].substr(3, 2));

            // Handle the case where '00:00' should be treated as '24:00'
            hour = (hour == 0) ? 24 : hour;

            int temp = (hour * 60) + minute;
            ans.push_back(temp);
        }

        // Step 2: Sort the 'ans' vector to make it easier to find the minimum difference
        sort(ans.begin(), ans.end());

        // Initialize 'minDiff' to a large value
        int minDiff = INT_MAX;

        // Step 3: Calculate the minimum time difference between adjacent time points
        for (int i = ans.size() - 1; i >= 0; i--) {

            // Caution: Ensure that 'i' is within the valid range to prevent integer overflow or
            // out-of-bounds access, as overflow issues can lead to runtime errors.
            // (hindiiii) i > 0 if agar ham ye condition na lagaye to ans[i-1] error denga jab i = 0 ho to. so check karlo k i 0 se bada hai kya
            if (i > 0 && ans[i] - ans[i - 1] < minDiff)
                minDiff = ans[i] - ans[i - 1];
        }

        // Step 4: Calculate the circular difference (between the first and last times)
        int circularDiff = (24 * 60 - ans.back()) + ans[0];

        // Step 5: Return the minimum of the calculated differences
        // Consideration: Handle the possibility of overflow in the circular difference calculation.
        // Test Cases:
        // 1. ["12:12", "00:13"] => minDiff = 721 (without circular), circularDiff = 119 (with circular), minDiff should be returned.
        return min(minDiff, circularDiff);
    }
};
