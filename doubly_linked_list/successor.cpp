#include "doubly_linked_list.hpp"
#include<iostream>
using namespace std;

void DoublyLinkedList::successor(int value)
{
    Node* temp = head;
    
    while (temp != nullptr && temp->data != value) temp = temp->next;
    
    if (temp == nullptr)
    {
        cout << "\n\n" << value << " was not found in the linked list";
        return;
    }
    
    if (temp->next == nullptr)
    {
        cout << "\n\n" << value << " has no successor";
        return;
    }
    
    cout << "\n\nSuccessor of " << value << " is " << temp->next->data;
}