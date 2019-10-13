# Linked Lists

Linked list is a linear data structure, meaning its elements are stored adjacently at the logical level. Unlike arrays, for instance, the elements on a linked list are linked through pointers and located on **non-contiguous** memory spaces.

![alt text](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2013/03/Linkedlist.png)

**Representation**
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


**Advantages**
- Dynamic size

**Drawbacks**
- Random access not allowed. Desired element has to be accessed sequentially starting from the first node.
- Extra memory is required for each element pointer.
- Inserting a new element is more expensive than arrays, as extra memory has to be allocated every time and elements have to be shifted to make room for new elements in the list.
