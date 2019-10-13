#pragma once
#include<stdio.h>
#include<iostream>
#include<stdexcept>
using namespace std;

class MinIntHeap
{
private:
	int capacity = 10;
	int size = 0;

	int* items = (int*)malloc(capacity * sizeof(int));

	int getLeftChildindex(int parentIndex) { return 2 * parentIndex + 1; }
	int getRightChildIndex(int parentIndex) { return 2 * parentIndex + 2; }
	int getParentIndex(int childIndex) { return (childIndex - 1) / 2; }

	bool hasleftChild(int index) { return getLeftChildindex(index) < size; }
	bool hasRightChild(int index) { return getRightChildIndex(index) < size; }
	bool hasParent(int index) { return getParentIndex(index) >= 0; }

	int leftChild(int index) { return items[getLeftChildindex(index)]; }
	int rightChild(int index) { return items[getRightChildIndex(index)]; }
	int parent(int index) { return items[getParentIndex(index)]; }

	void swap(int IndexOne, int IndexTwo) {
		int temp = items[IndexOne];
		items[IndexOne] = items[IndexTwo];
		items[IndexTwo] = temp;
	}

	void ensureExtraCapacity() {
		if (size == capacity) {
			items = (int*) realloc(items, capacity * 2);
			capacity *= 2;
		}

	}

public:
	MinIntHeap();
	~MinIntHeap();

	int peek() {
		
		if (size == 0) {
			throw std::invalid_argument("Ilegal State");
		}
		return items[0];
	}

	int poll() {
		if (size == 0) {
			throw std::invalid_argument("Ilegal State");
		}
		int item = items[0];
		items[0] = items[size - 1];
		size--;
		heapifyDown();
		return item;
	}

	void add(int item) {
		ensureExtraCapacity();
		items[size] = item;
		size++;
		heapifyUp();
	}

	void heapifyUp() {
		int index = size - 1;
		while (hasParent(index) && parent(index) > items[index]) {
			swap(getParentIndex(index), index);
			index = getParentIndex(index);
		}
	}

	void heapifyDown(){}

};

