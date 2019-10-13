#pragma once
#include <iostream>

using namespace std;

template<class T> class Node {
public:
	T data;
	Node<T>* next;

};

template<class T> class list {
public:
	Node<T>* head;

	void prepend(T data);
	void append(T data);
	void deleteWithValue(T data);


};