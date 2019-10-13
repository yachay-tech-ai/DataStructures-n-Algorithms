#include "Trie.h"



TrieNode::TrieNode()
{
}


TrieNode::~TrieNode()
{
}

TrieNode* TrieNode::getNode()
{
	TrieNode* pnode = new TrieNode;
	pnode->isEndOfWord = false;
	for (int i = 0; i < 26; i++) pnode->children[i] = NULL;
	return pnode;
}

int TrieNode::getCharIndex(char c)
{
	return c -'a';
}

void TrieNode::insert(TrieNode* root, string key)
{
	TrieNode* pcrawl = root;
	for (int i = 0; i < key.length(); i++) {
		pcrawl->size++;
		int index = getCharIndex(key[i]);
		if (!pcrawl->children[index]) pcrawl->children[index] = getNode();

		pcrawl = pcrawl->children[index];
	}
	pcrawl->isEndOfWord = true;
}

bool TrieNode::search(TrieNode* root, string key)
{
	TrieNode* pcrawl = root;
	for (int i = 0; i < key.length(); i++) {
		int index = getCharIndex(key[i]);
		if (!pcrawl->children[index])return false;

		pcrawl = pcrawl->children[index];
	}
	return(pcrawl != NULL && pcrawl->isEndOfWord);
}

int TrieNode::findCount(string s)
{
	return 0;
}

