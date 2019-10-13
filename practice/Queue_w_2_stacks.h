#pragma once
#include <stack>
using namespace std;

template <class T> class QueueWStacks {

private:

	stack<T> stackOldestTop;
	stack<T> stackNewestTop;

	void shiftStacks() {
		if (stackOldestTop.empty())
			while (!stackNewestTop.empty()) {
				stackOldestTop.push(stackNewestTop.top());
				stackNewestTop.pop();
			}
	}

public:

	QueueWStacks();
	void enqueue(T value) {
		stackNewestTop.push();
	}

	T peek() {
		shiftStacks();
		return stackOldestTop.top();
	}

	void dequeue() {
		shiftStacks();
		stackOldestTop.pop();
	}

};