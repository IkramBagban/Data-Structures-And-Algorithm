// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

// question link :- https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1
int count(int arr[], int n, int x)
{
    int start = 0;          // Initialize the start index to the beginning of the array.
    int end = n - 1;        // Initialize the end index to the last element of the array.
    int rightOccIndex = -1; // Initialize the index to track the rightmost occurrence of x with -1.
    int leftOccIndex = -1;  // Initialize the index to track the leftmost occurrence of x with -1.

    // Search for the rightmost occurrence of x.
    while (start <= end)
    {
        int mid = start + (end - start) / 2; // Calculate the middle index.

        if (x < arr[mid]) // If x is smaller than the middle element,
        {
            end = mid - 1; // search in the left half of the array.
            continue;      // skip the iteration.
        }
        else if (x == arr[mid]) // If x is equal to the middle element,
        {
            rightOccIndex = mid; // Update the rightmost occurrence index.
        }
        start = mid + 1; // Move the 'start' index to search in the right half of the array.
    }

    // Reset the start and end variables to search for the leftmost occurrence.
    start = 0;
    end = n - 1;
    // Search for the leftmost occurrence of x.
    while (start <= end)
    {
        int mid = start + (end - start) / 2; // Calculate the middle index.

        if (x > arr[mid]) // If x is greater than the middle element,
        {
            start = mid + 1; // Adjust the 'start' index to search in the right half of the array.
            continue;         // skip the iteration.
        }
        else if (x == arr[mid]) // If x is equal to the middle element,
        {
            leftOccIndex = mid; // Update the leftmost occurrence index.
        }
        end = mid - 1; // Move the 'end' index to search in the left half of the array.
    }

    // If both rightmost and leftmost occurrences are found,
    // calculate the total occurrences and return it.
    if (rightOccIndex != -1 && leftOccIndex != -1)
    {
        return rightOccIndex - leftOccIndex + 1;
    }
    return 0; // If x is not found in the array, return 0.
}



int main()
{

    int Arr[] = {1, 1, 2, 2, 2, 2, 3};
    // int Arr[] = {10, 11};
    int target = 3;
    int size = 7;
    int total = count(Arr, size, target);
    cout << total;

    return 0;
}


// Solution 2 :refactored code.
class Solution{
public:	
    // findRightOcc is a flag. 
    // if it is true means we are here for search right most occurence 
    // if it is false that means we are her for left most occ
	int findtOcc (int arr[], int n , int x, bool findRightOcc){
	    int start = 0;
	    int end = n-1;
	    
	    int ans = -1;
	    
	    while(start <= end){
	        int mid = start + (end - start)/2;
	        
	        if(arr[mid] == x){
	            ans = mid; // Update answer with the current index
	            
                // If searching for the rightmost occurrence (if findRightOcc is true )
                // move to the right half.
	            // Otherwise, move to the left half.
	            findRightOcc ? start = mid + 1 : end = mid - 1;
	        }
	        
	        else if(arr[mid] < x)
	            start = mid + 1;
	        else
	            end = mid - 1;
	        
	    }
	    
	    return ans;
	}
	int count(int arr[], int n, int x) {
	    
	    
	    // right most occ index
	    int rightOcc = findtOcc(arr, n, x, true);

        // ***this is a corner case***
        // if we are searching an element and if we get -1 as result
        // it mean that element is not present in arr
        // so we can return 0. if we don't return like this.
        // so niche k line me ** int ans = rightOcc - leftOcc + 1; **
        // jo code line hai uska output kuch aisa honga agar result me -1 aaya to
        // int ans = (-1) - (-1) + 1 = 1
        // right ya left OCc dono me se ek bhi -1 aya mean dono -1 hai. 
	    if(rightOcc == -1) return 0;
	    
	    // right most occ index
	    int leftOcc = findtOcc(arr, n, x, false);
	    
	    
	    int ans = rightOcc - leftOcc + 1;
	    return ans;
	}
};