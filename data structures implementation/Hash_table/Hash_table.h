#include <list>
#pragma once
using namespace std;

// THIS IS A HEADER FILE TO DECLARE STRUCTURE OF THE CLASS USING ONLY HEADERS, IMPLEMENT FUNCTION IN CLASS CPP FILE
class Hash_table
{
	int BUCKET;		// number of buckets
	list<int>* table;		//pointer to a list containning buckets
public:
	Hash_table(int V);
	~Hash_table();

	void insert(int x);
	void del(int key);

	int HashFunction(int x) {
		return (x%BUCKET);
	}

	void displayHash();
};

