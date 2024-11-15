#include "circular_linked_list.hpp"
#include<iostream>
using namespace std;

void CircularLinkedList::search(int value)
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
                cout << "\n\n" << value << " found in the linked list";
                return;
            }
        } while (temp != tail->next);
    }
    
    cout << "\n\n" << value << " not found in the linked list";
}