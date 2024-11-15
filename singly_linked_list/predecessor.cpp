#include "singly_linked_list.hpp"
#include<iostream>
using namespace std;

void SinglyLinkedList::predecessor(int value)
{
    if (head == nullptr)
    {
        cout << "\n\nLinked list is empty";
        return;
    }

    Node* prev = nullptr;
    Node* temp = head;

    while (temp != nullptr)
    {
        if (temp->data == value)
        {
            if (prev == nullptr)
            {
                cout << "\n\n" << value << " has no predecessor";
                return;
            }

            else
            {
                cout << "\n\nPredecessor of " << value << " is " << prev->data;
                return;
            }
        }
        
        prev = temp;
        temp = temp->next;
    }

    cout << "\n\n" << value << " was not found in the linked list";
}