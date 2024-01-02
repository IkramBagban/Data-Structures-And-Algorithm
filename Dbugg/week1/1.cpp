#include<iostream>
using namespace std;
/*
Pattern
1
23
345
4567
*/
int main(){
    int n=5;
    int i=1;
    while(i<n){
        int j = i,count = 0;
        while(count<i){
            cout<<j;
            j = j + 1;
            count = count + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}
