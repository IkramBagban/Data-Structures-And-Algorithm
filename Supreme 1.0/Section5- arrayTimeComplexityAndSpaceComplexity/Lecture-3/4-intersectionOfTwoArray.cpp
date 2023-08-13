#include <iostream>
#include <vector>
using namespace std;

// Q - print duplicate elements 
// input arr1 = {1,2,3,4,5,6} b = {4,5,8,9}
// output : ans = {4,5}

int main()
{

    vector<int> arr1{1,2,3,4,5,6};
    vector<int> arr2{4,5,8,9};
    vector<int> ans;

    // merging arrays
    for (int i = 0; i < arr1.size(); i++)
    {
        int element = arr1[i];
        for (int j = 0; j < arr2.size(); j++)
        {
            if (element == arr2[j])
                ans.push_back(arr2[j]);
        }
    }

    // printing array
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
