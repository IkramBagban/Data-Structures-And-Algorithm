// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

int getLength(char ch[]){
    int index = 0;

    while(ch[index] != '\0'){
        index++;
    }
    return index;

}

int main()
{

    char ch[6] = {'i', 'k', 'r', 'a', 'm', '\0'};
    cout << ch << endl;

    cout << "The Length Of array is " << getLength(ch) << endl;

    return 0;
}