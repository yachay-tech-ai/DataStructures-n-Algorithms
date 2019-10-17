# Binary Search Trees

Let **Tr** be a binary tree with left children **Ti** and right children **Td**
We say that **Tr** is a binary search tree, if and only if both these conditions hold true:

-  (**Tr**'s value is greater than **Ti** and **Ti** is also a binary search tree) or **Ti** is empty.
- (**Tr**'s value is less than **Td** and **Td** is also a binary search tree) or **Td** is empty.

![alt_text](https://media.geeksforgeeks.org/wp-content/uploads/BSTSearch.png)

The above properties provide an ordering among keys so that the operations like search, minimum and maximum can be done fast. If there is no ordering, then we may have to compare every key to search a given key.

## Searching for a key

To search for a given key, we first compare it with the root. If the key is at root, we return root. if the key is greater than root's key, we recurr for the right subtree, or we recurr to the left subtree otherwise.

![alt_tree](https://upload.wikimedia.org/wikipedia/commons/9/9b/Binary_search_tree_example.gif)

## key insertion

To insert a node with a given key, we first traverse the tree starting from the root, down to a leaf node, using the same search principle explained before. When we hit a leaf node, we insert the new node as its child.

![alt_text](https://www.mathwarehouse.com/programming/images/binary-search-tree/binary-search-tree-insertion-animation.gif)

## Deleting a node

There exists three possibilities when deleting a node from a search tree. For the third case, refer to BST traversal to understand inorder traversal.

1) **Node to be deleted is a leaf**. This is the easiest as we just have to delete the node.
![alt_text](https://www.ideserve.co.in/learn/img/bstDelete_0.gif)

2) **Node to be deleted has only one child**. We have to copy the child node into its parent, and then delete child.
![alt_text](https://www.ideserve.co.in/learn/img/bstDelete_1.gif)
2) **Node to be deleted has two children** Find inorder successor of the node. Copy contents of the inorder successor to the node and delete the inorder successor. Note that inorder predecessor can also be used.
![alt_text](https://www.ideserve.co.in/learn/img/bstDelete_2.gif)

## BST Traversals

1) **Inorder Traversal**. In case of binary search trees (BST), Inorder traversal gives nodes in non-decreasing order. The algorithm is the following (notice the recursive nature):

  - Traverse the left subtree, i.e., call Inorder(left-subtree)
  - Visit the root of current tree.
  - Traverse the right subtree, i.e., call Inorder(right-subtree)
  
2) **Preorder Traversal** Preorder traversal is used to create a copy of the tree. Preorder traversal is also used to get prefix expression on of an expression tree. The algorithm is the following:

  - Visit the root.
  - Traverse the left subtree, i.e., call Preorder(left-subtree).
  - Traverse the right subtree, i.e., call Preorder(right-subtree).
  
3) **Postorder Traversal** Postorder traversal is used to delete the tree. Postorder traversal is also useful to get the postfix expression of an expression tree. The algorithm is the following:
  
  - Traverse the left subtree, i.e., call Postorder(left-subtree).
  - Traverse the right subtree, i.e., call Postorder(right-subtree).
  - Visit the root.


https://www.ideserve.co.in/learn/binary-search-tree-delete
https://www.mathwarehouse.com/programming/gifs/binary-search-tree.php
