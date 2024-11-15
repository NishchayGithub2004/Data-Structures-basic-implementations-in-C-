#include "circular_doubly_linked_list.hpp"
#include<iostream>
using namespace std;

void CircularDoublyLinkedList::successor(int value)
{
    if (head == nullptr)
    {
        cout << "\n\nLinked list is empty";
        return;
    }
    
    Node* temp = head;
    
    do 
    {
        if (temp->data == value) 
        {
            cout << "\n\nPredecessor of " << value << " is " << temp->next->data;
            return;
        }
        
        temp = temp->next;
    } while (temp != head);
    
    cout << "\n\n" << value << " not found in the linked list";
}