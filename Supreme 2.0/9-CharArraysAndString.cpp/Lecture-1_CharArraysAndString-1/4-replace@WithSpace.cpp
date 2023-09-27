// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <cstring>
using namespace std;

void replaceWithSpace(char ch[]){

    int index = 0;
    while(ch[index] != '\0'){
        int currentChar = ch[index];
        if(currentChar == '@'){
            ch[index] = ' ';
        }
        index++;
    }

}

int main() {

    char ch[100] = {'i','k' ,'r' ,'a' ,'m' ,'@' ,'b' ,'a' ,'g' ,'b' ,'a' ,'n' ,'@' ,'i' ,'b' };
    // cout << endl << "Type Here : ";
    // cin.getline(ch,100);

    cout << "Before => " << ch << endl;
    replaceWithSpace(ch);
    cout << "After => " << ch << endl;

    return 0;
}