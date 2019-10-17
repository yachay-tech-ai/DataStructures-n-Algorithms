# Binary Search trees

Let *Tr* be a binary tree with left children *Ti* and right children *Td*
We say that *Tr* is a binary search tree, if and only if both these conditions hold true:

-  (*Tr*'s value is greater than *Ti* and *Ti* is also a binary search tree) or *Ti* is empty.
- (*Tr*'s value is less than *Td* and *Td* is also a binary search tree) or *Td* is empty.

![alt_text](https://media.geeksforgeeks.org/wp-content/uploads/BSTSearch.png)

The above properties provide an ordering among keys so that the operations like search, minimum and maximum can be done fast. If there is no ordering, then we may have to compare every key to search a given key.

## Searching for a key

To search for a given key, we first compare it with the root. If the key is at root, we return root. if the key is greater than root's key, we recurr for the right subtree, or we recurr to the left subtree otherwise.

![alt_tree](https://upload.wikimedia.org/wikipedia/commons/9/9b/Binary_search_tree_example.gif)

## key insertion

To insert a node with a given key, we first traverse the tree starting from the root, down to a leaf node, using the same search principle explained before. When we hit a leaf node, we insert the new node as its child.

![alt_text](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTx-v32ITUNXAiJWY9wKK49ZOCG1eUw9gFvTZ0fbOjk2jSGVJjOGw)
