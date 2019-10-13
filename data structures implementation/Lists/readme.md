# Linked Lists

Linked list is a linear data structure, meaning its elements are stored adjacently at the logical level. Unlike arrays, for instance, the elements on a linked list are linked through pointers and located on **non-contiguous** memory spaces.

**__search for the code inside this folder__**

![alt text](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2013/03/Linkedlist.png)

## Advantages
- Dynamic size

## Drawbacks
- Random access not allowed. Desired element has to be accessed sequentially starting from the first node.
- Extra memory is required for each element pointer.
- Inserting a new element is more expensive than arrays, as extra memory has to be allocated every time and elements have to be shifted to make room for new elements in the list.

## Representation

A linked list is represented by a pointer to the first node of the linked list. The first node is called the head. If the linked list is empty, then the value of the head is NULL.

Each node has at least two parts:
1) data
2) Pointer to the next node.

Below is an example of a Node class in C++:
```C++
class Node { 
public: 
    int data; 
    Node* next; 
}; 
```
## Linked list traversal


## Inserting nodes

**At the front of the list**
![alt text](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2013/03/Linkedlist_insert_at_start.png)

There are 4 steps:

1) Allocate node
2) Put data
1) Make the new node's next pointer, point to the head of the list.
2) Make new node the head of the list.

**After a given node**
![alt text](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2013/03/Linkedlist_insert_middle.png)

There are 5 steps:

1) Allocate new node
2) Put data
3) Reach the desired node inside the linked list to insert after
3) Make next for new node as next of previous node
4) Move the next of previous node as new node

**At the end**
![alt text](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2013/03/Linkedlist_insert_last.png)

There are 6 steps:

1) Allocate node
2) Put data
3) Make next node of the new node point to NULL
4) Check if list is empty, if it is, make new node the HEAD of the list.
5)Reach to the last node in the list
6) Change the next of the last node to point to the new node.

## Deleting Nodes

There are 4 steps to delete a node from a linked list:
![alt text](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2014/05/Linkedlist_deletion.png)

1) Find previous node of the node to be deleted
2) Create a temporal pointer to point at the element to be deleted.
2) Change the next of the previous node to point to next element pointed by the node to be deleted
3) Free memory for the node to be deleted, i.e. free the memory pointed by the temporal pointer.
