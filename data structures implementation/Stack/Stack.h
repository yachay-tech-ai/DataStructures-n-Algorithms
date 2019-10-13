#pragma once
template <class T> class Node {
public:
	T data;
	Node<T>* next;
};

template <class T> class Stack {
private:
	int len;
	Stack<T> * ptrStack;

public:
	
	Stack() {
		this->ptrStack = NULL;
		this->len = 0;

	}

	//method for inserting an element on top of the stack
	void push(T data) {
		//remember nodo is has the direction of the object created in the heap, &nodo is the direction of the pointer which is in the stack
		Node<T>* nodo = (Node<T>*)malloc(sizeof(Node<T>));
		nodo->data = data;
		nodo->next = ptrStack;
		ptrStack = nodo;
		len++;
	}


	// Method for eliminating top element from the stack
	void pop() {
		//freeing temp, we are liberating the memory of the node pointed by temp
		Node<T>* temp = ptrStack;
		ptrStack = ptrStack->next;
		free(temp);
		len--;
	}

	int getLength() {
		return this->len;
	}

	void printStack() {
		Node<T>* ptr = ptrStack;
		while (ptr != NULL) {
			cout << ptr->data << " ";
			ptr = ptr->next;
		}
	}
};


