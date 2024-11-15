#include "circular_linked_list.hpp"
#include<iostream>
using namespace std;

void CircularLinkedList::successor(int value)
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
            if (temp->data == value)
            {
                cout << "\n\nSuccessor of " << value << " is " << temp->next->data;
                return;
            }

            temp = temp->next;
        } while (temp != tail->next);
    }

    cout << "\n\n" << value << " was not found in the linked list";
}