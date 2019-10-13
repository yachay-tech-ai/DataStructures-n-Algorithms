#pragma once
#include <iostream>
using namespace std;
//Insertand search costs O(key_length), however the memory requirements of Trie is O(ALPHABET_SIZE* key_length* N)
class TrieNode
{
public:
	TrieNode* children[26];
	int size = 0;
	bool isEndOfWord;

	TrieNode* getNode();
	int getCharIndex(char c);
	void insert(TrieNode* root, string key);
	bool search(TrieNode* root, string key);
	int findCount(string s);
	TrieNode();
	~TrieNode();
};

