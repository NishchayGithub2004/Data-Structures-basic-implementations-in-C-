#include "singly_linked_list.hpp"
#include<iostream>
using namespace std;

void SinglyLinkedList::display()
{
    if (head == nullptr)
    {
        cout << "\n\nLinked list is empty";
        return;
    }
    
    Node* temp = head;

    cout << "\n\nElements of the linked list are : ";
    
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";
}