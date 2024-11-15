#include "circular_linked_list.hpp"
#include<iostream>
using namespace std;

void CircularLinkedList::predecessor(int value)
{
    if (tail == nullptr)
    {
        cout << "\n\nLinked list is empty";
        return;
    }

    else
    {
        Node* temp = tail->next;

        do
        {
            if (temp->next->data == value)
            {
                cout << "\n\nPredecessor of " << value << " is " << temp->data;
                return;
            }

            temp = temp->next;
        } while (temp != tail->next);
    }

    cout << "\n\n" << value << " was not found in the linked list";
}