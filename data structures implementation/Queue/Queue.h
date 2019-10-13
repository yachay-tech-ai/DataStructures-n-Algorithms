#pragma once
template <class T> class Node {
private:
	T data;
	Node* next;
	Node(T data) {
		this->data = data;
	}
};

template <class T> class Queue {
private:
	Node<T>* head;
	Node<T>* tail;
public:
	//Queue Behavior
	Queue();
	bool isEmpty();
	T peek();
	void enqueue(T data);
	T dequeue();
};
