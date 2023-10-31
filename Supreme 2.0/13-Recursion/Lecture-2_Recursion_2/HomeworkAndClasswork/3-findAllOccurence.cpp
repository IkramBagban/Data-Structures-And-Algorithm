// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <vector>
using namespace std;

void findAllOccurence(vector<int>v, int index, int target){
    // base case 
    if(index >= v.size())return;

    // processing 
    if(target == v[index]){
        cout << index << " ";
    }

    findAllOccurence(v,index+1, target);
}

int main() {

    vector<int> v = {10,20,40,10,60,10,20};
    int index = 0;
    int target = 10;

    cout << "Indexes of all occurence "<< endl;
    findAllOccurence(v, index, target);


    return 0;
}