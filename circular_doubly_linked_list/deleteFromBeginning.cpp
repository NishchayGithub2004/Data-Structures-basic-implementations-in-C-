#include "circular_doubly_linked_list.hpp"
#include<iostream>
using namespace std;

void CircularDoublyLinkedList::deleteFromBeginning()
{
    if (head == nullptr) // if linked list is empty
    {
        cout << "\n\nLinked list is empty";
        return;
    }
    
    else if (head->next == head)
    {
        Node* temp = head;
        head = nullptr;
        delete temp;
    }
    
    else
    {
        Node* temp = head;
        head->prev->next = head->next;
        head = head->next;
        delete temp;
    }

    cout << "\n\nNode successfully deleted from the beginning";
}