#include <iostream>
#include "List.h"

template<class T> 
void list<T>::prepend(T data) {
	Node<T>* newNode = (Node<T>*) malloc(sizeof(Node<T>));
	newNode.data = data;

	newNode->next = head;
	head = newNode;
}

template<class T>
void list<T>::append(T data) {
	Node<T>* newNode = (Node<T>*) malloc(sizeof(Node<T>));
	newNode.data = data;

	Node<T>* current = head;
	if (head == NULL)return;
	if (head.data == data) {
		Node<T>* temp = head;
		head = head->next;
		free(temp);
		return;
	}
	while (current->next != NULL) {
		if (current->next->data) {
			Node<T>* temp = current->next;
			current->next = current->next->next;
			free(temp);
			return;
		}
		current = current->next;
	}
}