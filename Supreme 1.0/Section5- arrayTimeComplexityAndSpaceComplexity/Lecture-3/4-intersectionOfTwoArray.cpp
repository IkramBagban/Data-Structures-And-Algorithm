#include <iostream>
#include <vector>
using namespace std;

// Q - print duplicate elements
// input arr1 = {1,2,3,4,5,6} b = {4,5,8,9}
// output : ans = {4,5}

int main()
{

    vector<int> arr1{1, 2, 3, 4, 5, 6};
    vector<int> arr2{4, 5, 3, 3, 8, 9};
    vector<int> ans;

    //     With the break statement ----:

    // This finds the intersection of unique elements from both vectors.
    // For your example, it returns 3, 4, 5.
    // This approach is used when you want to find distinct common elements between the two vectors.
    // Essentially, it treats duplicates in arr2 as "used up" once they've been matched.

    // Without the break statement ---------------:
    // This approach returns the intersection of elements from arr1 with all possible matches in arr2, even if it means matching one element from arr1 to multiple identical elements in arr2.
    // For your example, it returns 3, 3, 4, 5.
    // This approach is used when you want to count the occurrences of common elements between the two vectors.
    // It allows a number in arr1 to match with multiple duplicates in arr2.
    // So, which one to choose depends on the desired output:

    // If you want a list of unique common elements, use the first approach with the break.
    // If you want to count the number of times each element from arr1 appears in arr2, use the second approach without the break.

    for (int i = 0; i < arr1.size(); i++)
    {
        int element = arr1[i];
        for (int j = 0; j < arr2.size(); j++)
        {
            if (element == arr2[j])
            {

                // Mark the matched element in arr2 with -1 to prevent further matching with this occurrence.
                arr2[j] = -1; // replaces occurrence with -1 in arr2
                ans.push_back(element);
                break;
                // to check arr2
                // for (auto value : arr2)
                // {
                //     cout << value << " ";
                // }
            }
        }
    }

    // printing vector
    // for (int i = 0; i < ans.size(); i++)
    for (auto value : ans)
    {
        cout << value << " ";
    }

    return 0;
}
