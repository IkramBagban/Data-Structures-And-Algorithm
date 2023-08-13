#include <iostream>
#include <vector>
using namespace std;

// Question: Find the first triplet of distinct numbers in an array/vector that add up to a given target value.
// Note: The triplet should consist of numbers with different indexes in the array.
// Input: arr = {1, 2, 3, 4, 5, 6, 8}, target = 12
// Output: Triplet found: {3, 4, 5}


vector<int> tripletSum(vector<int> arr, int sum)
{
    vector<int> triplet;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << i << "---->"<<endl;

        // By running the inner loop from 'i', we reduce unnecessary comparisons
        // j = i + 1 to exclude same index element
        for (int j = i + 1; j < arr.size(); j++)
        {
            cout << " " << j << "- - - ";

            for (int k = j + 1; k < arr.size(); k++)
            {
                    cout << "k=" << k << " -> ";
                if (arr[i] + arr[j] + arr[k] == sum)
                {
                    triplet.push_back(arr[i]);
                    triplet.push_back(arr[j]);
                    triplet.push_back(arr[k]);
                    return triplet;
                }
            }
            cout <<endl;
        }

        // cout << endl;  // Formatting for debugging output
    }
   
    return triplet;
}

int main()
{

    vector<int> arr{1, 2,3,4, 5, 6, 8};
    int target = 12;
    vector<int> triplet = tripletSum(arr, target);
    if (!triplet.empty())
    {

        cout << endl
             << "Triplet found: {" << triplet[0] << ", " << triplet[1]<< ", " << triplet[2] << "}" << endl;
    }
    else
    {
        cout << "No triplet found.";
    }
    return 0;
}
