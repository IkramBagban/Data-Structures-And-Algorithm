#include <iostream>
#include <limits.h>
using namespace std;

int main()
{

    // // question - count number of 1 and 0 present in the array;
    int arr[17] = {3, 4, 2, 76, 43, 87, 97, 54, 23, 12, 54, 23, 65, 2, 6, 8, 43};

    int minNumber = INT_MAX;

    // finding minimum number using lenear search
    for (int i = 0; i < 17; i++)
    {
        if (arr[i] < minNumber)
        {
            minNumber = arr[i];
        }
    }

    cout << "min Number is " << minNumber << endl;
// cout << "hello";
    return 0;
}
