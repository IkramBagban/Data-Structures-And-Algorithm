#include <iostream>
#include <vector>
using namespace std;

// Q - Find Unqiue Element, Every Element Occurs twice except 1
// input : {1,1,2,2,3,4,4,5,5}
// output : 3
// explanation :  Every Element Occuring twice except 3

int findUniqueNumber(vector<int> arr)
{
    int ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans =ans ^ arr[i];
    }
    return ans;
}
int main()
{

    int n;
    cout << "Enter the size of vector : ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int uniqueNumber = findUniqueNumber(arr);
    cout << "Unique number is " << uniqueNumber << endl;
    return 0;
}
