#include <iostream>
#include <vector>
using namespace std;

// Question: Find the first quadruplet of distinct numbers in an array/vector that add up to a given target value.
// Note: The quadruplet should consist of numbers with different indexes in the array.
// Input: arr = {1, 2, 3, 4, 5, 6, 8}, target = 12
// Output: Quadruplet found: {1, 2,3,6}

vector<int> quadrupletSum(vector<int> arr, int sum)
{
    vector<int> quadruplet;
    for (int i = 0; i < arr.size(); i++)
    {
        // cout << i << "---->" << endl;

        // By running the inner loop from 'i', we reduce unnecessary comparisons
        // j = i + 1 to exclude same index element
        for (int j = i + 1; j < arr.size(); j++)
        {
            // cout << " " << j << "- - - ";

            for (int k = j + 1; k < arr.size(); k++)
            {

                for (int l = k + 1; l < arr.size(); l++)
                {
                    // cout << "l=" << l << " -> ";
                    if (arr[i] + arr[j] + arr[k] + arr[l] == sum)
                    {

                        quadruplet.push_back(arr[i]);
                        quadruplet.push_back(arr[j]);
                        quadruplet.push_back(arr[k]);
                        quadruplet.push_back(arr[l]);
                        return quadruplet;
                    }
                }
            }
            cout << endl;
        }

        // cout << endl;  // Formatting for debugging output
    }

    return quadruplet;
}

int main()
{

    vector<int> arr{1, 2, 3, 4, 5, 6, 8};
    // vector<int> arr{1, 2, 3, 4, 5, 6, 8};

    int target = 12;
    vector<int> quadruplet = quadrupletSum(arr, target);
    if (!quadruplet.empty())
    {
        cout << endl
             << "quadruplet found: {" << quadruplet[0] << ", " << quadruplet[1] << ", " << quadruplet[2] << ", " << quadruplet[3] << "}" << endl;
    }
    else
    {
        cout << "No quadruplet found.";
    }
    return 0;
}
