#include "circular_doubly_linked_list.hpp"
#include<iostream>
using namespace std;

void CircularDoublyLinkedList::deleteFromEnd()
{
    if (head == nullptr)
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
        Node* temp = head->prev;
        temp->prev->next = head;
        head->prev = temp->prev;
        delete temp;
    }

    cout << "\n\nNode successfully deleted from the end";
}