// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <unordered_map>
using namespace std;

void countCharacters(unordered_map<char, int> &mapping, string str)
{
    for (auto ch : str)
    {
        mapping[ch]++;
    }
}

int main()
{

    string str = "ikram bagban";
    unordered_map<char, int> mapping;
    countCharacters(mapping, str);

    for (auto i : mapping)
    {
        cout << i.first << "->" << i.second << endl;
    }

    return 0;
}