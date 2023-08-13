#include <iostream>
#include <vector>
using namespace std;

// Question: Find the first pair of distinct numbers in an array/vector that add up to a given target value.
// Note: The pair should consist of numbers with different indexes in the array.
// Input: arr = {1, 3, 4, 5, 6, 8}, target = 8
// Output: Pair found: {3, 5}

vector<int> pairSum(vector<int> arr, int sum)
{
    vector<int> pair;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << i << "---->";

        // By running the inner loop from 'i', we reduce unnecessary comparisons
        // j = i + 1 to exclude same index element
        for (int j = i + 1; j < arr.size(); j++)
        {
            cout << " " << j;
            // Check if the two numbers add up to the target sum
            if ( arr[i] + arr[j] == sum)
            {
                // If a valid pair is found, store it and return
                pair.push_back(arr[i]);
                pair.push_back(arr[j]);
                return pair;
            }
        }

        // cout << endl;  // Formatting for debugging output
    }
    return pair;
}

int main()
{

    vector<int> arr{1, 4, 5, 6, 8};
    int target = 8;
    vector<int> pairs = pairSum(arr, target);
    if (!pairs.empty())
    {

        cout << endl
             << "Pair found: {" << pairs[0] << ", " << pairs[1] << "}" << endl;
    }
    else
    {
        cout << "no pair found";
    }
    return 0;
}
