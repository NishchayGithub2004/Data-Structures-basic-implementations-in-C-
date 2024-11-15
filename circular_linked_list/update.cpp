#include "circular_linked_list.hpp"
#include<iostream>
using namespace std;

void CircularLinkedList::update(int oldValue, int newValue)
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
            if (temp->data == oldValue)
            {
                temp->data = newValue;
                cout << "\n\nNode having value " << oldValue << " updated to " << newValue << " successfully";
                return;
            }

            temp = temp->next;
        } while (temp != tail->next);
    }

    cout << "\n\nNode having value " << oldValue << " not found in the list"; 
}