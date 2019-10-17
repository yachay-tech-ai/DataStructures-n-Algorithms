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

![alt_text](https://www.mathwarehouse.com/programming/images/binary-search-tree/binary-search-tree-insertion-animation.gif)

## Deleting a node

There exists three possibilities when deleting a node from a search tree.

1) *Node to be deleted is a leaf*. This is the easiest as we just have to delete the node.
![alt_text](https://www.ideserve.co.in/learn/img/bstDelete_0.gif)

2) *Node to be deleted has only one child*. We have to copy the child node into its parent, and then delete child.
![alt_text](https://www.ideserve.co.in/learn/img/bstDelete_1.gif)
2) *Node to be deleted has two children* Find inorder successor of the node. Copy contents of the inorder successor to the node and delete the inorder successor. Note that inorder predecessor can also be used.
![alt_text](https://www.ideserve.co.in/learn/img/bstDelete_2.gif)
