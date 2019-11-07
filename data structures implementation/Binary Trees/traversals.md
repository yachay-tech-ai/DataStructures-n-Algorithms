## Tree Traversals

__Recursive and iterative approaches for tree traversal are in the code in this folder__.

Trees can be traversed in different ways. 
The following are the most common approaches to traverse a tree:

**1) Inorder Traversal:**

    1) Traverse the left subtree, i.e., call Inorder(left-subtree)
    2) Visit the root.
    3) Traverse the right subtree, i.e., call Inorder(right-subtree)

**2) Preorder Traversal:**

    1) Visit the root.
    2) Traverse the left subtree, i.e., call Preorder(left-subtree)
    3) Traverse the right subtree, i.e., call Preorder(right-subtree)
  
**3) Postorder Traversal:**

     1) Traverse the left subtree, i.e., call Postorder(left-subtree)
     2) Traverse the right subtree, i.e., call Postorder(right-subtree)
     3) Visit the root.
     
**4) Breadth First traversal**

We can tackle this by using a print level function:

      /*Function to print level order traversal of tree*/
      printLevelorder(tree)
      for d = 1 to height(tree)
         printGivenLevel(tree, d);

      /*Function to print all nodes at a given level*/
      printGivenLevel(tree, level)
      if tree is NULL then return;
      if level is 1, then
          print(tree->data);
      else if level greater than 1, then
          printGivenLevel(tree->left, level-1);
          printGivenLevel(tree->right, level-1);
          
Alternately, que can use a queue:

      printLevelorder(tree)
      1) Create an empty queue q
      2) temp_node = root /*start from root*/
      3) Loop while temp_node is not NULL
          a) print temp_node->data.
          b) Enqueue temp_node’s children (first left then right children) to q
          c) Dequeue a node from q and assign it’s value to temp_node

