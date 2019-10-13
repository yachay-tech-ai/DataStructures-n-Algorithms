#include "Queue.h"
#include <iostream>
Queue<class T>::Queue();

template<class T>
bool Queue<T>::isEmpty()
{
	return head == NULL; 
}

template<class T>
T Queue<T>::peek()
{
	return head.data;
}

template<class T>
void Queue<T>::enqueue(T data) {
	Node<T>* node = (Node<T>*)malloc(sizeof(Node<T>));
	if (tail != NULL)tail->next = node;
	tail = node;

	if (head == NULL)head = node;
}

template<class T>
T Queue<T>::dequeue()
{
	T data = head->data;
	Node<T>* temp = head;
	head = head->next;
	free(temp);
	if (head == NULL)tail = NULL;
	return data;

}
