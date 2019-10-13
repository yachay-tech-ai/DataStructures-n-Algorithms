#include "Hash_table.h"
#include<iostream>
using namespace std;


Hash_table::Hash_table(int V)
{
	this->BUCKET = V;
	table = new list<int>[BUCKET];
}


Hash_table::~Hash_table()
{
}

void Hash_table::insert(int key) {
	int index = HashFunction(key);
	table[index].push_back(key);
}

void Hash_table::del(int key) {
	int index = HashFunction(key);

	list<int>::iterator i;
	for (i = table[index].begin(); i != table[index].end(); i++) {
		if (*i == key)break;
	}

	if (i != table[index].end()) table[index].erase(i);

}

void Hash_table::displayHash() {
	for (int i = 0; i < BUCKET; i++) {
		cout << i;
		for (auto x : table[i])
			cout << "-->" << x;
		cout << endl;
	}
}