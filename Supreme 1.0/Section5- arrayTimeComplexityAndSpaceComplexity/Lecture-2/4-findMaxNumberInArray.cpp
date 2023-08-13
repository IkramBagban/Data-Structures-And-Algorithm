#include <iostream>
#include <limits.h>
using namespace std;

int main()
{

    int arr[17] = {3, 4, 2, 76, 43, 87, 97, 54, 23, 12, 54, 23, 65, 2, 6, 8, 43};

    int maxNumber = INT_MIN;

    // finding max number using lenear search
    for (int i = 0; i < 17; i++)
    {
        if (arr[i] > maxNumber)
        {
            maxNumber = arr[i];
        }
    }

    cout << "Max Number is " << maxNumber << endl;

    return 0;
}
