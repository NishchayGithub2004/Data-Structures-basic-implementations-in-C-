#include "circular_doubly_linked_list.hpp"
#include<iostream>
using namespace std;

void CircularDoublyLinkedList::update(int oldValue, int newValue)
{
    Node* temp = head;
    
    if (head == nullptr) 
    {
        cout << "\n\nLinked list is empty";
        return;
    }
    
    do
    {
        if (temp->data == oldValue) 
        {
            temp->data = newValue;
            cout << "\n\n" << oldValue << " updated to " << newValue << " successfully";
            return;
        }
        
        temp = temp->next;
    } while (temp != head);
    
    cout << "\n\n" << oldValue << " not found in the linked list";
}