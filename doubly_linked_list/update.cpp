#include "doubly_linked_list.hpp"
#include<iostream>
using namespace std;

void DoublyLinkedList::update(int oldValue, int newValue)
{
    if (head == nullptr)
    {
        cout << "\n\nLinked list is empty";
        return;
    }
    
    Node* temp = head;
    while (temp != nullptr)
    {
        if (temp->data == oldValue)
        {
            temp->data = newValue;
            cout << "\n\nNode having value " << oldValue << " changed to " << newValue << " successfully";
            return;
        }

        temp = temp->next;
    }

    cout << "\n\nNode having value " << oldValue << " not found in the linked list";
}