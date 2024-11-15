#include "circular_linked_list.hpp"
#include<iostream>
using namespace std;

void CircularLinkedList::deleteFromEnd()
{
    if (tail == nullptr)
    {
        cout << "\n\nLinked list is empty";
        return;
    }

    else
    {
        Node* temp = tail->next;

        if (tail->next == tail) tail = nullptr;

        else
        {
            Node* current = tail->next;

            while (current->next != tail) current = current->next;

            current->next = tail->next;

            tail = current;
        }

        delete temp;
    }

    cout << "\n\nNode from the end of the linked list deleted successfully";
}