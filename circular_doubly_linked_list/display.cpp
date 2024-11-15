#include "circular_doubly_linked_list.hpp"
#include<iostream>
using namespace std;

void CircularDoublyLinkedList::display()
{
    if (head == nullptr) 
    {
        cout << "\n\nLinked list is empty";
        return;
    }
    
    Node* temp = head;

    cout << "\n\nLinked list is : "
    
    do
    {
        cout << temp->data << " <--> ";
        temp = temp->next;
    } while (temp != head);

    cout << "circle back";
}