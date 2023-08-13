#include <iostream>
#include <vector>
using namespace std;

// Q: Merge two arrays/vectors. If a number occurs in both arrays, write it only once in the output.
// Input: arr1 = {1,2,3,4,5,6}, arr2 = {4,5,8,9}
// Output: ans = {1,2,3,4,5,6,8,9} // Duplicates are not added twice.


int main()
{

    vector<int> arr1{1, 2, 3, 4, 5, 6,8};
    vector<int> arr2{3,5,9,7,8,8};
    vector<int> ans;

    for (int i = 0; i < arr1.size(); i++)
    {
        int element = arr1[i];
        ans.push_back(element);
        for (int j = 0; j < arr2.size(); j++)
        {
            if (element == arr2[j])
            {
                arr2[j] = -1;
                // break; // If we also want the same number if they are on the same array
            }
        }
    }

    for(int i = 0; i< arr2.size();i++){
        int element = arr2[i];
        if(element == -1) continue;
        ans.push_back(element);

    }

    // printing vector

    for (auto value : ans)
    {
        cout << value << " ";
    }

    return 0;
}
