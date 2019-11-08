/*Implementation of a generic binary tree node and node creation
  along with traversals and tree printing */

#include <bits/stdc++.h>
#include <queue>
#include <stack>

using namespace std;
template <class T>
class Node{
    public:
    T data;
    Node* left;
    Node* right;
};

template <class T>
Node<T>* newNode(T data);  

template <class T>
void inorder(Node<T>* root);

template <class T>
void preorder(Node<T>* root);

template <class T>
void postorder(Node<T>* root);


template<class T>
class Node<T>* newNode(T data){
    Node<T>* node = new Node<T>;
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

//====== Inorder, preorder and postorder traversals =====//

template <class T>
void inorder(Node<T>* root){
    if(root == NULL)return;
    cout << root->data;
    inorder(root->left);
    inorder(root->right);
}

template <class T>
void preorder(Node<T>* root){
    if(root == NULL)return;
    preorder(root->left);
    cout << root->data;
    preorder(root->right);
}

template <class T>
void postorder(Node<T>* root){
    if(root == NULL)return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data;
}

//=================== Levelorder traversal===========//
template <class T>
int height(Node<T>* node){
    if(node == NULL) return 0;
    else{
        int lHeight = height(node->left);
        int rHeight = height(node->right);
        if( lHeight > rHeight) return (lHeight + 1);
        else return (rHeight + 1);

    }

}
template <class T>
void printCurrentLevel(Node<T>* node, int level){
    if(node == NULL)return;
    if( level == 1) cout << node->data << " ";
    else if( level > 1){
        printCurrentLevel(node->left, level - 1);
        printCurrentLevel(node->right, level - 1);
    }
}
template <class T>
void levelOrder(Node<T>* root){
    int h = height(root);
    for( int i = 1; i <= h; i++){
        printCurrentLevel(root, i);
    }
}

//===== LevelOrder using Queues (Breath First) =======//
template <class T>
void levelOrderQueue(Node<T>* root){
    queue<Node<T>*> q;
    Node<T>* temp_node = root;
    while( temp_node != NULL){
        cout << temp_node->data;
        if(temp_node->left != NULL)
        q.push(temp_node->left);
        if(temp_node->right != NULL)
        q.push(temp_node->right);
    
        temp_node = q.front();
        q.pop();
        
    }
}

template<class T>
void depthFirst(Node<T>* root){
    stack<Node<T>*> s;
    Node<T>* temp_node = root;
    while( temp_node != NULL){
        cout << temp_node->data;
        if( temp_node->left != NULL)
        s.push(temp_node->left);
        if(temp_node->right != NULL)
        s.push(temp_node->right);

        temp_node = s.top();
        s.pop();
    }
}





