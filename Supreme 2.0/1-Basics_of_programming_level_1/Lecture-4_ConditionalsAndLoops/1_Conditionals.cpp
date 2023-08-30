// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    // Check if the user's age is less than 18
    if (age < 18) {
        cout << "You are a child." << endl;
    }
    // If age is not less than 18, check if it's between 18 and 30
    else if (age >= 18 && age <= 30) {
        cout << "You are a young adult." << endl;
    }
    // If neither of the above conditions is met, assume the user is older
    else {
        cout << "You are older." << endl;
    }

    return 0;
}
