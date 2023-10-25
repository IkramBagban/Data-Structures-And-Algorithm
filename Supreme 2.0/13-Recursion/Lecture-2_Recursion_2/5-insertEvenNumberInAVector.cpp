// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <vector>
using namespace std;

// Function to collect all even numbers from a vector recursively
void collectEvenNumbers(vector<int>& input, vector<int>& result, int index) {
    // Check if we've reached the end of the input vector
    if (index >= input.size())
        return;

    // Check if the current element is even
    if (input[index] % 2 == 0) {
        result.push_back(input[index]); // Add the even number to the 'result' vector
    }

    // Continue searching for even numbers in the rest of the vector
    collectEvenNumbers(input, result, index + 1);
}

int main() {
    vector<int> numbers = {40, 10, 20, 50, 1};
    vector<int> evenNumbers; // Vector to store even numbers
    collectEvenNumbers(numbers, evenNumbers, 0);

    // Display all the even numbers found
    for (auto even : evenNumbers) {
        cout << even << " ";
    }

    return 0;
}
