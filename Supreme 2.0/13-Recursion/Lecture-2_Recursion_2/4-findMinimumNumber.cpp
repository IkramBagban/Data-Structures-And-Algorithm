// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <limits.h>
using namespace std;

void findMinimum(int *arr, int size, int index, int &mini)
{
    if (index == size)
        return ;

    mini = min(mini, arr[index]);

    findMinimum(arr, size, index + 1, mini);
}

int main()
{
    int arr[5] = {40, 10, 20, 50, 1};
    int size = 5;
    int index = 0;
    int mini = INT_MAX;
    findMinimum(arr, size, index, mini);

    cout << "Minimum Number Is : " << mini << endl;

    return 0;
}
