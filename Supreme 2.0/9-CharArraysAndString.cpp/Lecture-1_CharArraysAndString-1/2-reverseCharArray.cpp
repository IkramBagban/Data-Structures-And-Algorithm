// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <cstring>
using namespace std;

void reverseArray(char arr[], int size){
    int start = 0 ;
    int end = size-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main() {

    char name[6] = {'i', 'k', 'r', 'a', 'm', '\0'};
    int length = strlen(name);
    cout << "original array " << name << endl;

    reverseArray(name,length);

    cout << "reversed array " << name << endl;

    return 0;
}