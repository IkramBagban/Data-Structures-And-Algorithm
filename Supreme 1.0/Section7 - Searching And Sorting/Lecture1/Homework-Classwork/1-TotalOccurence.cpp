#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int TotalOccurence(vector<int> v, int target)
{
    auto firstOccurenec = lower_bound(v.begin(), v.end(), target);
    auto lastOccurenec = upper_bound(v.begin(), v.end(), target);
    cout << *firstOccurenec << endl;
    cout << "hello" << *lastOccurenec << endl;

    return 2;
}

int main()
{

    vector<int> v{1, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 5, 5, 6, 6, 9, 9};
    int target = 4;
    cout << "Total occurence of the given target is " << TotalOccurence(v, target) << endl;

    return 0;
}