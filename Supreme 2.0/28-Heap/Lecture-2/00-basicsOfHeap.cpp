/*
 Heap : A heap is a specialized data structure that is commonly used to implement priority queues. It is a complete binary tree where each node is either greater than or equal to (in a max heap) or less than or equal to (in a min heap) its child nodes. The root node of the heap represents the highest (or lowest) priority element.

Heaps are efficient for operations such as inserting elements, removing elements, and finding the highest (or lowest) priority element. They are widely used in various applications, including sorting algorithms like heapsort and graph algorithms like Dijkstra's algorithm.

Heaps can be implemented using arrays or linked lists. The array-based implementation is more common due to its simplicity and better cache performance.

*/

/*
They are categorized as follows:
- Min heap: In a min heap, each parent node is less than or equal to its child nodes.
- Max heap: In a max heap, each parent node is greater than or equal to its child nodes.
*/

// Implementation Details:
// Heaps are typically represented using an array. This array representation follows specific rules to maintain the heap's structure.

// Navigating the Heap:
// When you're at a given index (i) in the heap array, you can find the parent and children of that node using simple formulas.

// For 1-based indexing (indexing starts at 1):
// - The parent of a node at index i is found at index i/2.
// - The left child of a node at index i is found at index 2*i.
// - The right child of a node at index i is found at index 2*i + 1.

// For 0-based indexing (indexing starts at 0):
// - The parent of a node at index i is found at index (i - 1)/2.
// - The left child of a node at index i is found at index 2*i + 1.
// - The right child of a node at index i is found at index 2*i + 2.

/*
Heapification:
The term 'heapification' refers to the process of adjusting the heap to maintain its specific property (min or max) when an element is added or removed. This process is what keeps the heap in a valid state after any changes.
in simple words element ko tree me upper ya niche lejane k process ko heapification kehte hai.
*/
