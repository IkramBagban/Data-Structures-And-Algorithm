// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban


#include <iostream>
using namespace std;

int main()
{
    string name = "Ikram";
    cout << "Name: " << name << endl;

    string temp = "";

    // Display the length of the "name" string.
    cout << "Length of String: " << name.length() << endl;

    // Check if the "temp" string is empty and display the result (0 if not empty, 1 if empty).
    cout << "Is String Empty: " << temp.empty() << endl;

    // Access and display the character at position 0 in the "name" string.
    cout << "Character at Position 0: " << name[0] << endl;

    // Access and display the first character of the "name" string.
    cout << "Front Character of String: " << name.front() << endl;

    // Access and display the last character of the "name" string.
    cout << "Back Character of String: " << name.back() << endl;

    // Insert the string "aaa" at position 3 in the "name" string.
    name.insert(3, "aaa");
    cout << "Inserted: " << name << endl;

    // Append the character 'M' to the end of the "name" string.
    name.push_back('M');
    cout << "Pushed: " << name << endl;

    // Remove the last character from the "name" string.
    name.pop_back();
    cout << "Popped: " << name << endl;

    // Define a string named "findInStr" and check if it exists within the "name" string.
    string findInStr = "kra";
    if (name.find(findInStr) == string::npos)
    {
        cout << "Substring Not Found" << endl;
    }
    else
    {
        cout << "Substring Found" << endl;
    }

    // Compare two strings "str1" and "str2" and check if they match.
    string str1 = "ikram";
    string str2 = "ikram";
    if (str1.compare(str2) == 0)
    {
        cout << "Strings Match" << endl;
    }
    else
    {
        cout << "Strings Do Not Match" << endl;
    }

    // Extract a substring from "str3" starting at position 11 with a length of 5 characters.
    string str3 = "My name is ikram bagban";
    cout << "Substring: " << str3.substr(11, 5) << endl;

    return 0;
}
