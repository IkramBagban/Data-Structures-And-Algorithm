// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
#include <iostream>
using namespace std;

class Demo
{
public:
    int a;
    int b;
    int *c;     // Pointer member that will point to an integer on the heap

    // Constructor: Initializes the object and allocates memory for `c` on the heap
    Demo(int a, int b){
        this->a = a;
        this->b = b;
        this->c = new int(10);   // Allocating memory for c on the heap and assigning the value 10
    }

    // Destructor: Called automatically when an object goes out of scope or is destroyed.
    ~Demo(){
        cout << "Destructor Called" << endl;   // Just for the demonstration to show when the destructor is called
        delete c;  // Important: Releases the memory allocated on the heap for 'c' to prevent memory leaks
    }
};

int main()
{
    {
    // Creating an object `d1` of the class `Demo` inside a block scope
    Demo d1(2,3);
    cout << "a: " << d1.a << ", b: "  << d1.b  << endl;
    cout << "address of c: " << d1.c  << ", Value Of c: " << *d1.c<< endl;

    // At the end of this block, `d1` goes out of scope and its destructor is called to release resources
    }

    // Creating another object `d2` of the class `Demo`
    Demo d2(4,5);
    cout << "D2 Instance" << endl;

    // When the program exits, `d2` goes out of scope and its destructor is called

    return 0;
}
// the destructor (`~Demo()`) is freeing the memory that was dynamically allocated for the pointer member `c` of the class `Demo`.

// Specifically, this line in the constructor:
// this->c = new int(10);


// allocates memory on the heap to store an integer value (`10`). This allocation returns a memory address, which is stored in the pointer `c`.

// The destructor contains this line:
// delete c;

// This line frees (or releases) the memory that was allocated on the heap for the integer pointed to by `c`. By doing this, the program ensures that there are no memory leaks. 

// To clarify: Every time an object of the class `Demo` is created, a new memory block on the heap is allocated to store an integer value (`10`). When the object goes out of scope or is destroyed, the destructor ensures that this dynamically allocated memory is properly released.

// --------------------------------------

// The destructor (~Demo()) is a special member function of a class that is executed whenever an object of the class goes out of scope or is explicitly destroyed.

// Destructors are crucial when a class is managing resources like memory allocation on the heap. In this case, the class Demo has a pointer member c which points to dynamically allocated memory. To ensure there are no memory leaks (i.e., unreleased memory), the destructor is responsible for releasing this memory using delete.

// Without the destructor, the dynamically allocated memory for c would never be released, leading to a memory leak. This is why it's crucial to use a destructor in such scenarios.