#include "circular_linked_list.hpp"
#include<iostream>
using namespace std;

void CircularLinkedList::display()
{
    if (tail == nullptr)
    {
        cout << "\n\nLinked list is empty";
        return;
    }

    else
    {
        Node* temp = tail->next;
        
        cout << "\n\nLinked list is : ";

        do
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != tail->next);
        
        cout << "circle back";
    }
}