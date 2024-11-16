#include "XORLinkedList.hpp"
#include <iostream>
using namespace std;

void XORLinkedList::search()
{
    int value;

    cout << "\n\nEnter value to search : ";
    cin >> value;
    
    Node* curr = head;
    Node* prev = nullptr;
    Node* next;

    while (curr != nullptr) 
    {
        if (curr->data == value) 
        {
            cout << "\n\nNode with value " << value << " found.";
            return;
        }
        
        next = XOR(prev, curr->xor_ptr);
        prev = curr;
        curr = next;
    }

    cout << "\n\nNode with value " << value << " not found.";
}