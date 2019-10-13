#pragma once
class BST
{
public:
	int key;
	BST* left;
	BST* right;
	BST* parent;

	BST();
	~BST();

	BST* search(BST* root, int key);
	BST* newNode(int item);
	BST* insert(BST* node, int key);
	BST* deleteNode(BST* root, int key);
	void inorder(BST* root);
	void postorder(BST* root);
	void preorder(BST* root);
};

