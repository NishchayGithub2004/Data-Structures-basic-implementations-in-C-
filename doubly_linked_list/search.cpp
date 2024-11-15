#include "doubly_linked_list.hpp"
#include<iostream>
using namespace std;

void DoublyLinkedList::search(int value)
{
    if (head == nullptr)
    {
        cout << "\n\nLinked list is empty";
        return;
    }
    
    Node* temp = head;

    while (temp != nullptr)
    {
        if (temp->data == value)
        {
            cout << "\n\n" << value << " exists in the linked list";
            return;
        }

        temp = temp->next;
    }

    cout << "\n\n" << value << " does not exist in the linked list";
}