# Binary Tree

It is a tree data structure whose elements have at most 2 children, typically named left and right.

![alt_text](https://www.geeksforgeeks.org/wp-content/uploads/binary-tree-to-DLL.png)

## Applications of trees
 1) Manipulate hierarchical data
 2) Make information easy to search using tree traversal.
 3) Multi-stage decision making
 4) Manipulate sorted lists of data
 
 ## Properties
 
 1) The maximum number of nodes at level **I** of a binary tree is **2^(I-1)**.
 2) Maximum number of nodes in a binary tree of height **h** is **2^(h-1)**.
 3) In a binary tree with N nodes, minnimum possible height or minimum number of levels is Log2(N+1)
 4) A binary tree with **L** leaves has at least **Log2(L) + 1** levels
 5) In binary tree where every node has 0 or 2 children; **number_of_leaf_nodes** is always one more than **nodes_with_two_children**
 
 ## Types of binary tree
 
 **Full Binary tree**
 Everry node has 0 or 2 children, i.e: all nodes except leaves have two children.
 Number of leaf nodes is number of internal nodes + 1.
 
 **Complete Binary tree**
 If all levels are completely filled except posibly the last level, and last level has all keys as left as possible.
 
 ![alt_text](https://www.cs.cmu.edu/~adamchik/15-121/lectures/Trees/pix/full_complete.bmp)
 
 **Blanced binary tree**
 If the height of the tree is O(logn) where n is the number of nodes.
 
 ![alt_text](https://i1.wp.com/www.techiedelight.com/wp-content/uploads/Height-Balanced-Tree-2.png?zoom=2.625&resize=368%2C275&ssl=1)
 
 **Degenerate Binary tree**
 A tree where every internal node has one child. It performs the same as a linked list
 
 ![alt_text](https://qph.fs.quoracdn.net/main-qimg-eccb472654af69385afe691e9958a713.webp)
 
 
 ## Implementation
 
 A binary tree node contains:
- Data
- Pointer to left child
- Pointer to right child

To create a new node:
- initialize a pointer of type node, say node_ptr
- insert data into the data member of the object pointed by node_ptr.
- Initialize left and right children as null, as this is a new node.

To attach the new node to the tree:

- make left or right child pointers from one of the leaf nodes of the tree point at node_ptr.

