#pragma once
class Linked_List
{
public:
	Linked_List();
	~Linked_List();
};

template <class T> class Node {
private:
	Node<T> * ptrStack;

public:
	T data;
	Node<T>* next;

	Node() {
		this->ptrStack = NULL;

	}

	//stack implementation
	void push(T data) {
		//remember nodo is has the direction of the object created in the heap, &nodo is the direction of the pointer which is in the stack
		Node<T>* nodo = (Node<T>*)malloc(sizeof(Node<T>));
		nodo->data = data;
		nodo->next = ptrStack;
		ptrStack = nodo;
	}

	// list implementation
	void push(T data, int place) {
		Node<T>* tmp = ptrStack;
		Node<T>* nodo = (Node<T>*)malloc(sizeof(Node<T>));
		nodo->data = data;
		while (place-- > 1) {
			tmp = tmp->next;
		}
		nodo->next = tmp->next;
		tmp->next = nodo;
	}

	//stack implementation
	void pop() {
		//freeing temp, we are liberating the memory of the node pointed by temp
		Node<T>* temp = ptrStack;
		ptrStack = ptrStack->next;
		free(temp);
	}

	//list implementation
	void del(int place) {
		Node<T>* temp = ptrStack;
		while (place-- > 1) {
			temp = temp->next;
		}
		Node<T>* temp2 = temp;
		temp = temp->next;
		temp2->next = temp->next;
		free(temp);
	}



	Node<T>* search(T value) {
		// if value found, return pointer of the node, else return NULL direction
		Node<T>* ptr = ptrStack;
		while (ptr->next != NULL) {
			if (ptr->data == value) {
				return (Node<T>*)ptr;
			}
			ptr = ptr->next;
		}
		return NULL;
	}

	int len() {
		Node<T>* current = ptrStack; int count = 0;
		while (current != NULL) {
			count++;
			current = current->next;
		}
		return count;
	}
	void printList() {
		Node<T>* ptr = ptrStack;
		while (ptr != NULL) {
			cout << ptr->data << " ";
			ptr = ptr->next;
		}
	}
};


