## Trie Trees
Trie is an efficient information retrieval data structure.
Search complexity can be brought to optimal limit, key length. However penalty is on trie storage requirements.

For example if we store keys in binary search tree, a well balanced BST will need **MlogN**, where **M** is string length and **N** is number of keys in tree.
Using trie, we can search the key in linear time.

![alt_text](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Trie.png)

## Representation

Every node of trie consistsd of multiple branches. Each branch represents a possible character. We need to mark the last node of every key as end-of-word node.

A structure to represent nodes in an alphabet can be as following:

      // Trie node
      struct TrieNode
      {
           struct TrieNode *children[ALPHABET_SIZE];

           // isEndOfWord is true if the node
           // represents end of a word
           bool isEndOfWord;
      };
  
To insert a key into a trie is simple. Every character of the key is inserted as an individual node. Note that children is an array of pointers to next level trie nodes.
The key character acts as an index into the array children. 

If the input key is new, or an extension of an existing one, we need to construct non-existing nodes of the key, and mark the end-of-word for the last node.
