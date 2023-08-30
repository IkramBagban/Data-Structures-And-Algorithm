// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

int main() {
    // Input user's age
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // Check if user is old enough to drive (age >= 18)
    if (age >= 18) {
        // If old enough
        cout << "You are old enough to drive." << endl;

        // Ask if user has a driver's license
        bool hasLicense;
        cout << "Do you have a driver's license? (1 for yes, 0 for no): ";
        cin >> hasLicense;

        // Nested: Check if user has a license
        if (hasLicense) {
            cout << "You can drive legally." << endl;
        } else {
            cout << "You are old enough but need a license to drive." << endl;
        }
    } else {
        // If not old enough
        cout << "You are not old enough to drive." << endl;
    }

    return 0;
}
