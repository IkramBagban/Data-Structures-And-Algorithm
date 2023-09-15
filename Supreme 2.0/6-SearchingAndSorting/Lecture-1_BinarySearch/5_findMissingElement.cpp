// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <vector>
using namespace std;



int findMissingElement(vector<int> v)
{

    int start = 0; // Initialize the start index to the beginning of the vector
    int end = v.size() - 1; // Initialize the end index to the end of the vector
    int missingElement = -1; // Initialize the answer to -1 (not found)

    while (start <= end)
    {
        int mid = start + (end - start) / 2; // Calculate the middle index

        if(v[mid]- mid != 1){
            end = mid-1;
            missingElement = mid+1; 
        }else{
            start = mid+1;
        }
    }
    return missingElement; // Return the index of the first occurrence (or -1 if not found)
}


int main()
{

    vector<int> v{1,2,3,4,5,6,7,9,10,11,12}; 
    int missingElement = findMissingElement(v);
    cout << missingElement;

    return 0;
}
