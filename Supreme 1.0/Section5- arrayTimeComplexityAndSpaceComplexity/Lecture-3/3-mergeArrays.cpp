#include <iostream>
#include <vector>
using namespace std;

// Q - union/merge arrays
// input : a = {1,2,3}, b = {4,5,6},
// output : ans{1,2,3,4,5,6}

int main()
{

    int arr1[3] = {1, 2, 3};
    int sizeArr1 = 3;
    int arr2[4] = {4, 5, 6, 7};
    int sizeArr2 = 4;

    vector<int> ans;

    // merging arrays
    for (int i = 0; i < sizeArr1; i++)
    {
        ans.push_back(arr1[i]);
    }
    for (int i = 0; i < sizeArr2; i++)
    {
        ans.push_back(arr2[i]);
    }

    // printing array
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
