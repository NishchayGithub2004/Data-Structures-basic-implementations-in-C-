#include "singly_linked_list.hpp"
#include<iostream>
using namespace std;

void SinglyLinkedList::successor(int value)
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
            if (temp->next != nullptr)
            {
                cout << "\n\nSuccessor of " << value << " is " << temp->next->data;
                return;
            }

            else
            {
                cout << "\n\n" << value << " has no successor";
                return;
            }
        }

        temp = temp->next;
    }

    cout << "\n\n" << value << " does not exist in the linked list";
}