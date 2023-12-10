// A Binary Search Tree (BST) is a special kind of binary tree used for efficient data storage and retrieval. 
// It has a unique structure where each node has a maximum of two children, and they are arranged in a specific order:

// => Value Rule: Each node in a BST contains a unique value.
// => Left Child Rule: The left child of a node (if it exists) contains a value less than its parent node.
// => Right Child Rule: The right child of a node (if it exists) contains a value greater than its parent node

// This structure makes searching very efficient. When you look for a value, you start at the root and at each step, you can ignore one half of the tree, significantly cutting down the search time.

// Example:
// Let's consider a BST with these numbers: 15, 10, 20, 8, 12, 17, 25.
// Here's how they would be arranged:

//         15
//        /  \
//       10  20
//      / \  / \
//     8  12 17 25

// 15 is the root.
// 10 (less than 15) is the left child of 15, and 20 (greater than 15) is the right child.
// Under 10, 8 (less than 10) is on the left, and 12 (greater than 10) is on the right.
// Similarly, under 20, 17 (less than 20) is on the left, and 25 (greater than 20) is on the right.

// Searching in BST:
// To search for a number, say 12, you start at the root (15). 
// Since 12 is less than 15, you move to the left child (10). 
// Again, as 12 is greater than 10, you move to the right child of 10, where you find 12.


// Time Complexity (TC) of Binary Search Tree (BST):
// Average Case: O(log n) for operations like insertion, searching, and deletion.
// Worst Case: O(n) if the tree is unbalanced (e.g., resembles a linear chain).

// Space Complexity (SC) of BST:
// All Cases: O(n), as it depends on the total number of nodes in the tree, regardless of its structure.