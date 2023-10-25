// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

void printArray(int *arr, int size, int index) {
    if(index >= size) return;

    cout << arr[index] << " ";

    // The reason we use '++index' instead of 'index++' here is because of the difference between pre-increment and post-increment.
    // '++index' is a pre-increment, which means it increments the value of 'index' before it's used in the function call.
    // On the other hand, 'index++' is a post-increment. If we used this, it would pass the current value of 'index' to the function
    // and increment it only after the function call. As a result, the same array element would be printed repeatedly,
    // leading to an infinite recursive loop and eventually a stack overflow.
    // instead we can use index+1 too
    printArray(arr,size,++index);
    // printArray(arr,size,index+1);
}

int main() {

    int arr[5] = {1,2,3,4,5};
    printArray(arr, 5, 0);

    return 0;
}
