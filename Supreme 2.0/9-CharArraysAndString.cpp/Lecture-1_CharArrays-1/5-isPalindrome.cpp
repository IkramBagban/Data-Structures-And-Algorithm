// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <cstring>
using namespace std;

void isPalindrome(char ch[], int len){

    int start = 0;
    int end = len - 1;
    while(start <= end){
       if(ch[start] == ch[end]){
        start++;
        end--;
       }else{
        cout << ch << " Is Not Palindrome";
        return; // we can write this return keyword in vod function to prevent execution.but we can't return any value in void function
       }
    }
    cout << ch << " Is Palindrome";

}

int main() {

    char ch[100];
    cout << endl << "Type Here : ";
    cin.getline(ch,100);

    // Get Length
    int len = strlen(ch);

    isPalindrome(ch, len);

    return 0;
}