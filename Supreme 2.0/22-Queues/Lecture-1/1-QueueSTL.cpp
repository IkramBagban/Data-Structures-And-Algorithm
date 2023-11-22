#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Create a queue of integers
    queue<int> q;

    // Add the integers 10 and 50 to the queue
    q.push(10);
    q.push(50);

    // Display the front element (first in line) of the queue
    cout << "Queue Front :" << q.front() << endl;
    // Display the back element (last in line) of the queue
    cout << "Queue Back :" << q.back() << endl;

    // Check if the queue is empty and display the result (0 for false, 1 for true)
    cout << "Is Queue Empty : " << q.empty() << endl;

    // Indicate that we are removing one element
    cout << endl << "Only One Element In Queue" << endl;
    // Remove the front element from the queue (which is 10)
    q.pop();

    // The queue now contains only one element (50)
    // Hence both front and back will show 50
    cout << "Queue Front :" << q.front() << endl;
    cout << "Queue Back :" << q.back() << endl;

    // The queue is not empty yet, so q.empty() returns 0
    cout << "Is Queue Empty : " << q.empty() << endl;

    // Remove the last remaining element (which is 50)
    q.pop();
    cout << endl << "No Element In Queue" << endl;

    // Now the queue is empty. However, trying to access front or back is undefined behavior
    // The program may crash, or it may display garbage values
    cout << "Queue Front :" << q.front() << endl; // Undefined behavior
    cout << "Queue Back :" << q.back() << endl; // Undefined behavior

    // q.empty() will correctly return 1, as the queue is empty
    cout << "Is Queue Empty : " << q.empty() << endl;

    return 0;
}

// The code demonstrates basic operations on a queue, such as adding and removing elements and checking if it is empty.
// After the q.pop() operations, the code attempts to access the front and back of the queue without checking if it's empty. This is where you encounter undefined behavior. In a robust program, you should always check if the queue is empty before accessing these elements.
// The output of q.front() and q.back() after the queue becomes empty is not reliable and should not be used.
