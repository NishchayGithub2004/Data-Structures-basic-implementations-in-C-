#ifndef XOR_HPP
#define XOR_HPP
#include <cstdint>

// C++ code to implement a XOR linked list

// Detailed information of XOR linked list and this project will be provided in the readme files

// Create a structure defining a node

struct Node
{
    int data; // integer value contained by the node
    Node* xor_ptr; // pointer that stores XOR of memory address of node just before and next of a node

    Node(int value)
    {
        data = value;
        xor_ptr = nullptr;
    }
};

// Create a class

class XORLinkedList
{
    private: Node* XOR(Node* a, Node* b) {return reinterpret_cast<Node*>(reinterpret_cast<uintptr_t>(a) ^ reinterpret_cast<uintptr_t>(b));} // this function XOR's memory addresses of nodes pointed to by two pointers 'a' and 'b'

    Node *head, *tail; // pointers 'head' and 'tail' point to first and last node of the XOR linked list respectively

    public:

    XORLinkedList() : head(nullptr), tail(nullptr) {} // constructor of the linked list. Initially, 'head' and 'tail' are null pointers

    void insertAtBeginning();

    void insertAtEnd();

    void deleteFromBeginning();

    void deleteFromEnd();

    void display();

    void update();

    void search();
};

#endif