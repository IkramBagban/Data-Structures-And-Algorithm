// // question :- https://leetcode.com/problems/search-a-2d-matrix/description/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // Get the number of rows in the matrix
        int row = matrix.size();
        // Get the number of columns in the matrix
        int col = matrix[0].size();
        // Calculate the total number of elements in the matrix
        int n = col * row;

        // Initialize the start and end indices for binary search
        int start = 0;
        int end = n - 1;

        while (start <= end) { // Perform a binary search on the flattened matrix
            int mid = start + (end - start) / 2; // Calculate the middle index

            // Convert the flattened index 'mid' back to row and column indices
            int colIndex = mid % col;
            int rowIndex = mid / col;

            if (matrix[rowIndex][colIndex] == target) { // If the element at the middle index matches the target, return true
                return true;
            } else if (matrix[rowIndex][colIndex] > target) { // If the element is greater than the target,
                end = mid - 1; // Adjust the 'end' index to search in the left half of the flattened matrix
            } else { // If the element is less than the target,
                start = mid + 1; // Adjust the 'start' index to search in the right half of the flattened matrix
            }
        }

        return false; // If the target is not found in the matrix, return false
    }
};
