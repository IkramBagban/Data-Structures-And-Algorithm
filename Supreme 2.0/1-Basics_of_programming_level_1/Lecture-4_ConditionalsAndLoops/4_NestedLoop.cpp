// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

int main() {
    // Using nested loops to create a multiplication table
    for (int i = 1; i <= 5; i++) {
        // Outer Loop (i): Represents rows
        // The outer loop runs from 1 to 5, representing the rows of the multiplication table.
        
        for (int j = 1; j <= 5; j++) {
            // Inner Loop (j): Represents columns
            // Inside the outer loop, there's another loop that runs from 1 to 5, representing the columns of the table.
            
            cout << i * j << "\t"; // Print the product
            // Inside the inner loop, the product of i and j is printed, which gives the values for the multiplication table.
            // The '\t' adds a tab to separate values.
        }
        
        cout << endl; // Move to the next row
        // After each inner loop iteration, a newline character is printed to move to the next row.
    }

    return 0;
}
