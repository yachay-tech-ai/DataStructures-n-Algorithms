# Hash Maps

Hash maps, also called dictionaries, are data structures that maps a given key (string, int, etc) to a particular value using a special hash function.
This function must have the following properties:

1) Efficiently computable
2) Should uniformly distribute the keys

**Python** includes dictionaries by default and **C++** also has has maps already implemented in the *unordered_map* library. Also, we are not providing implementation details from stratch, but rather showing basic concepts, how it works and how to use them in C++ and python.

## Representation

Hash maps make use of arrays. Each element in the array is a bucket defined as a linked list, that holds the values. We make use of linked list as a form of collision handling, i.e. when two different values share the same key.
To access a certain value, the key is passed to the hash function as input, and the hash function maps it to a bucket in the array of the hash map.

![alt text](https://upload.wikimedia.org/wikipedia/commons/thumb/7/7d/Hash_table_3_1_1_0_1_0_0_SP.svg/315px-Hash_table_3_1_1_0_1_0_0_SP.svg.png)

## Advantages

- Speed. We can access a particular value using a known key in constant time, and this key has some characteristical association to the value.
- Particularly efficient when the number of key-value pairs is known. The size of the array can be allocated only once and never resized. Also, the design of the hash map could be collision free for this case.

## Drawbacks

- The cost of a good hash function can be significantly higher than the inner loop for the lookup algorithm for a sequential list.
Thus hash tables are not effective when the number of entries is small.
- If the keys are not stored, there may be no easy wat to enumerate present keys in the table at any given moment.
- Become inefficient when there are many collisions.

