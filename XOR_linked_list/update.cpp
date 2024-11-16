#include "XORLinkedList.hpp"
#include <iostream>
using namespace std;

void XORLinkedList::update()
{
    int oldValue, newValue;

    cout << "\n\nEnter value to be replaced : ";
    cin >> oldValue;

    cout << "\n\nEnter value to be replaced by : ";
    cin >> newValue;

    Node* curr = head;
    Node* prev = nullptr;
    Node* next;

    while (curr != nullptr) 
    {
        if (curr->data == oldValue) 
        {
            curr->data = newValue;
            cout << "\n\nNode with value " << oldValue << " updated to " << newValue << ".";
            return;
        }
        
        // move to the next node
        next = XOR(prev, curr->xor_ptr);
        prev = curr;
        curr = next;
    }

    cout << "\n\nNode with value " << oldValue << " not found.";
}