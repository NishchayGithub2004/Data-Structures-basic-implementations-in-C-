#include "circular_doubly_linked_list.hpp"
#include<iostream>
using namespace std;

void CircularDoublyLinkedList::search(int value)
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
            cout << "\n\n" << value << " found in the list";
            return;
        }
        
        temp = temp->next;
    } while (temp != head);
    
    cout << "\n\n" << value << " not found in the list";
}