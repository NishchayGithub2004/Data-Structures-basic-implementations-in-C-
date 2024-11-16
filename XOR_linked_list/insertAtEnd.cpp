#include "XORLinkedList.hpp"
#include <iostream>
using namespace std;

void XORLinkedList::insertAtEnd()
{
    int value;

    cout << "\n\nEnter value to insert at the end : ";
    cin >> value;
    
    Node* newNode = new Node(value);

    if (head == nullptr)
    {
        head = tail = newNode;
        cout << "\n\n" << value << " added to an empty XOR linked list successfully";
        return;
    }

    else
    {
        newNode->xor_ptr = tail;
        tail->xor_ptr = XOR(newNode, tail->xor_ptr);
        tail = newNode;
        cout << "\n\n" << value << " added at the end of the XOR linked list successfully";
        return;
    }
}