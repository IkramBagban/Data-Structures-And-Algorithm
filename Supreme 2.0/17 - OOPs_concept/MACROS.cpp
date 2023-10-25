#include <iostream>
using namespace std;

// #define Explained:
// -----------------
// '#define' lets you set a name to mean something else.
// For example, we can say PI means 3.14. This is done before the code is run.

// Why use it?
// -----------------
// 1. Makes reading code easier.
// 2. If you need to change a value, like PI, you change it in one spot.

// When to use it?
// -----------------
// 1. When you have values that don't change.
// 2. For simple replacements in code.

#define PI 3.14  // Now, whenever we use PI, it means 3.14
#define MAX(x, y) (x > y ? x : y)  // This finds the bigger number of two numbers

// This function tells us the area of a circle.
float circleArea(float r) {
    return PI * r * r;
}

// This function tells us the distance around a circle.
float circlePerimeter(float r) {
    return 2 * PI * r;
}

int main() {
    // Show circle area for size 5
    cout << "Area for circle size 5: " << circleArea(5) << endl;
    
    // Show distance around circle for size 5
    cout << "Distance around circle size 5: " << circlePerimeter(5) << endl;

    int x = 6;
    int y = 10;
    // Show the bigger number between x and y
    cout << "Bigger number of " << x << " and " << y << " is: " << MAX(x, y) << endl;

    return 0;
}
