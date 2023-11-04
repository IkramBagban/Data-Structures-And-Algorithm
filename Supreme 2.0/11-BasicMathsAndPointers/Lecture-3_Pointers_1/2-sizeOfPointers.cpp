// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

int main() {

    // Understanding Pointer Sizes in C++

    // In this C++ program, we explore the concept of pointer sizes.
    // We'll declare variables of different data types, such as integers,
    // characters, and floats, and then create pointers to these variables.
    // Our goal is to determine the size in bytes of these pointers and
    // understand why they have different sizes.

    // Declare an integer variable 'num' and initialize it with the value 5.
    int num = 5;
    // Declare a pointer to an integer 'numPtr' and assign the address of 'num' to it.
    int* numPtr = &num;

    // Output the size (in bytes) of 'numPtr' using the 'sizeof' operator.
    cout << "Size of numPtr is " << sizeof(numPtr) << " bytes" << endl;

    // Declare a character variable 'ch' and initialize it with the character 'a'.
    char ch = 'a';
    // Declare a pointer to a character 'chPtr' and assign the address of 'ch' to it.
    char* chPtr = &ch;

    // Output the size (in bytes) of 'chPtr' using the 'sizeof' operator.
    cout << "Size of chPtr is *+3" << sizeof(chPtr) << " bytes" << endl;

    // Declare a float variable 'fl' and initialize it with the value 23.99.
    float fl = 23.99;
    // Declare a pointer to a float 'flPtr' and assign the address of 'fl' to it.
    float* flPtr = &fl;

    // Output the size (in bytes) of 'flPtr' using the 'sizeof' operator.
    cout << "Size of flPtr is " << sizeof(flPtr) << " bytes" << endl;

    // Here's what we will find:

    // 1. The size of 'numPtr' will be based on the size of an integer
    //    pointer, typically 4 bytes on a 32-bit system and 8 bytes on a 64-bit system.

    // 2. The size of 'chPtr' will be based on the size of a character
    //    pointer, which is usually 1 byte, as a character is 1 byte in size.

    // 3. The size of 'flPtr' will be based on the size of a float pointer,
    //    which is generally the same as an integer pointer (4 or 8 bytes),
    //    depending on the system's architecture.

    // These differences in pointer sizes are primarily due to the underlying
    // data type they point to and the system's architecture.

    return 0;
}
