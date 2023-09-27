// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <cstring>
using namespace std;

void convertToUpperCase(char ch[], int size){

    int index = 0;
    while(index<size){
        int currentChar = ch[index];
        if(currentChar >= 'a' && currentChar <= 'z'){
            ch[index] = currentChar - 'a' + 'A';
        }
        index++;
    }

}

int main() {

    char ch[100];
    cout << endl << "Type Here : ";
    cin.getline(ch,100);

    cout << "Before => " << ch << endl;
    convertToUpperCase(ch, strlen(ch));
    cout << "After => " << ch << endl;

    return 0;
}