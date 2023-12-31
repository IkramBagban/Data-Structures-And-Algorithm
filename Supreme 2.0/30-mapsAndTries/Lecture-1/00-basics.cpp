// # hash

// Maps in C++ are a part of the Standard Template Library (STL) and are used to store key-value pairs. There are two primary types of maps: ordered (`std::map`) and unordered (`std::unordered_map`). Both have unique characteristics, time complexities, and underlying data structures.

// ### 1. `std::map` (Ordered Map)
// - Underlying Data Structure: Typically implemented using a self-balancing binary search tree like a Red-Black Tree.
// - Operations Time Complexity:
//     - Access: O(log n)
//     - Insertion: O(log n)
//     - Deletion: O(log n)
//     - Search: O(log n)
//     - Traversal: Elements are ordered, making it easy to iterate in sorted order.
// - Space Complexity: O(n)

// - Characteristics:
//     - It keeps the keys in sorted order, which is beneficial for operations that require ordered data.
//     - It can be traversed in a sorted manner.
//     - Slower than `unordered_map` for most operations due to tree-based structure.
// - Usage: Use `std::map` when you need ordered data and operations like the lower bound, upper bound, etc.



// ### 2. `std::unordered_map` (Unordered Map)
// - Underlying Data Structure: Implemented using a hash table with an array of buckets.
// - Operations Time Complexity:
//     - Average Case:
//         - Access: O(1)
//         - Insertion: O(1)
//         - Deletion: O(1)
//         - Search: O(1)
//     - Worst Case (when hash collisions occur frequently):
//         - O(n) for all operations.
//         - • Traversal: The order is not guaranteed, as it depends on the hash function.
// - Space Complexity: O(n), but can have higher overhead due to the hash table.

// - Characteristics:
//     - Stores elements in no particular order.
//     - Faster than `std::map` for most cases because of constant-time complexity in the average case.
//     - Not suitable for operations that require ordering.
// - Usage: Prefer `std::unordered_map` when you need faster access and ordering is not a concern.

// ### Why Choose One Over the Other?
// - Ordered Map (`std::map`):
//     - Use when you need to maintain the order of elements.
//     - Useful for scenarios where you need to iterate through elements in a sorted manner.
// - Unordered Map (`std::unordered_map`):
//     - Choose when order doesn't matter.
//     - Offers faster average search, insertion, and deletion times

// ### Why Different Data Structures?

// - Ordered Map (`std::map`): The Red-Black Tree provides a balance between high-speed operations and maintaining order. This balance is crucial for applications where the data needs to be traversed or accessed in a sorted manner.
// - Unordered Map (`std::unordered_map`): The hash table provides faster access times at the cost of losing order. It is optimal for scenarios where quick lookup, insertion, and deletion are the priorities, and the order of elements is not important.