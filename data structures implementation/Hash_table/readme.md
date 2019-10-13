# Hash Maps

Hash maps, also called dictionaries, are data structures that maps a given key (string, int, etc) to a particular value using a special hash function.
This function must have the following properties:

1) Efficiently computable
2) Should uniformly distribute the keys

**Python** includes dictionaries by default and **C++** also has has maps already implemented in the *unordered_map* library.

## Representation

Hash maps make use of arrays. Each element in the array is a bucket defined as a linked list, that holds the values. We make use of linked list as a form of collision handling, i.e. when two different values share the same key.
To access a certain value, the key is passed to the hash function as input, and the hash function maps it to a bucket in the array of the hash map.

![alt text](https://upload.wikimedia.org/wikipedia/commons/thumb/7/7d/Hash_table_3_1_1_0_1_0_0_SP.svg/315px-Hash_table_3_1_1_0_1_0_0_SP.svg.png)
