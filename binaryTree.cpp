// This file contains the c++ code to implmeent a binary tree
// that is a root node with two parent nodes that have chidlren
// and pointers to the root node and left and rifht of the children node
// this is another datastructure to structure data 
#include <iostream>
#include <queue>
using namespace std;

// binary tree data is arbitary meaning we want to allow
// any data and any format into oir tree therefore , we us templates
template <typename T>
class Node{
public:
    T data; // data held by the node

    Node* left; // pointer to the left child

    node* right; // pointer to the right child
    
    // Constructor to initialize the node with a value
    Node(T value){
        data = value;
        left = nullptr;
        right = nullptr;
    }

};