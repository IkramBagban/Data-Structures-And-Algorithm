#include <iostream>
#include <limits.h>
using namespace std;

int main()
{

    // // question - print extreme - > 
    // ex 1 (odd) :
    // input : {1,2,3,4,5,6,7}
    // output : 1 7 2 6 3 5 4
    // ex 2 (even) :
    // input : {1,2,3,4,5,6,7,8}
    // output : 1 8 2 7 3 6 4 5

    // int arr[8] ={1,2,3,4,5,6,7,8};
    int arr[7] ={1,2,3,4,5,6,7};
    int size = 7;
    int start = 0;
    int end = size - 1;
    while(start<=end){
        if(start == end){
            cout << arr[start] << " ";
        }else{
              cout << arr[start] << " " <<  arr[end] << " ";
        }
        start++;
        end--;
    }

  
    return 0;
}
