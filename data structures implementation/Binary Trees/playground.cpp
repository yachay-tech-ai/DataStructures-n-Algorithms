#include <bits/stdc++.h>

/*Do what you want to do with binary trees in here. Let me
include the material for you */
#include "binary_tree.h"

using namespace std;
int main(void){
    //root
    Node<int>* root = newNode(3);
    root->left = newNode(5);
    root->right = newNode(2);

    //left child
    root->left->left = newNode(9);
    root->left->right = newNode(6);

    //right child
    root->right->left = newNode(8);
    root->right->right = newNode(1);

    //rightmost grandchild
    root->right->right->left = newNode(4);

    //traversals
    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    levelOrder(root);
    cout << endl;
    levelOrderQueue(root);
    cout << endl;
    depthFirst(root);
    cout << endl;
    

}
