#include "BST.h"
#include <iostream>
#include<stdio.h>
#include<iomanip>

using namespace std;

BST::BST()
{
}


BST::~BST()
{
}

BST* BST::search(BST* root, int key) {

	//base case, if key is in root or tree is null
	if (root == NULL || root->key == key) return root;
	
	//recursive cases
	//key is greater, pass right subtree
	if (root->key < key) return BST::search(root->right, key);

	//key is smaller, pass left subtree
	else return BST::search(root->left, key);

}

BST* BST::newNode(int item) {
	BST* node = (BST*)malloc(sizeof(BST));
	node->key = item;
	node->left = node->right = NULL;
	return node;
}

BST* BST::insert(BST* node, int key) {
	//base case
	if (node == NULL) return BST::newNode(key);

	//recursive case if key is greater, call to right subtree, else call to the left
	if (key < node->key)node->left = insert(node->left, key);
	else if (key > node->key)node->right = insert(node->right, key);

	return node;
}

void BST::inorder(BST* root) {
	if (root != NULL) {
		BST::inorder(root->left);
		cout << root->key << endl;
		BST::inorder(root->right);
	}
}

BST* BST::deleteNode(BST* root, int key) {
	if (root == NULL) return root;
	if (key < root->key)root->left = deleteNode(root->left, key);
	else if (key > root->key)root->right = deleteNode(root->right, key);

	else {
		if (root->left == NULL) {
			BST* temp = root->right;
			free(root);
			return temp;
		}
		else if (root->right == NULL)
		{
			BST *temp = root->left;
			free(root);
			return temp;
		}
		// node with two children: Get the inorder successor (smallest 
		// in the right subtree) 
		BST* temp = minValueNode(root->right);

		// Copy the inorder successor's content to this node 
		root->key = temp->key;

		// Delete the inorder successor 
		root->right = deleteNode(root->right, temp->key);
	}
	return root;
}

void BST::postorder(BST* root )
{
	postorder(root->left);
	postorder(root->right);
	cout << root->key << endl;
}