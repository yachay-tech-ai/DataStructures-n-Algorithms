# Stack

A stack is a linear data structure, in which its operations are performed on a Last-in, First-out (LIFO) policy.
To better understand this, consider some plates that are stack on top of each other. You put new plates at the top to grow the stack and you remove the plate that is also at the top of the stack.
![alt_text](https://www.tutorialspoint.com/data_structures_algorithms/images/stack_representation.jpg)

A stack has the following operations:

- **Push**: Adds an item in the stack. If the stack is full, then it is said to be an Overflow condition.
- **Pop**: Removes an item from the stack. The items are popped in the reversed order in which they are pushed. If the stack is empty, then it is said to be an Underflow condition.
- **Peek or Top**: Returns top element of stack.
- **isEmpty**: Returns true if stack is empty, else false.

## Implementation

A stack can be created using linked lists where we can only access the head of the list. 

**Pushing elements to a given stack**

Pushing an element to a stack is to insert a node at the top of a linked list.
![alt_text](https://camo.githubusercontent.com/62e9ee288e9fe71b112c5c4009a50cbeaa963cd2/68747470733a2f2f6d656469612e6765656b73666f726765656b732e6f72672f77702d636f6e74656e742f63646e2d75706c6f6164732f67712f323031332f30332f4c696e6b65646c6973745f696e736572745f61745f73746172742e706e67)

There are 4 steps:

- Allocate node
- Put data
- Make the new node's next pointer, point to the head of the list.
- Make new node the head of the list.

**Popping elements from a given stack**

Popping an element to a stack is to delete the head node of a linked list.

There are 3 steps:

- Create a temporal node to point at the top of the stack.
- Set the next element the new head of the stack.
- Free the temporal node.


