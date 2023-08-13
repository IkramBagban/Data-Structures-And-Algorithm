#include <iostream>
using namespace std;

int main()
{


    // question - count number of 1 and 0 present in the array;
    int arr[23] = {1,0,0,0,1,1,0,0,1,0,1,0,1,0,0,1,1,1,0,2,3,5,3};

    int countOne = 0;
    int countZero = 0;
    for (int i = 0; i < 23; i++)
    {
        if(arr[i]==1){
            countOne++;
        }
        if(arr[i]==0){
            countZero++;
        }
    }
 
    
    cout << "Number of zeros "  << countZero<<endl;
    cout << "Number of ones "  << countOne<<endl;
    return 0;
}
