#include "doubly_linked_list.hpp"
#include<iostream>
using namespace std;

void DoublyLinkedList::insertAtEnd(int value)
{
    Node* newNode = new Node(value);

    if (tail == nullptr)
    {
        head = tail = newNode;
    }

    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    cout << "\n\n" << value << " successfully inserted at the end of the linked list";
}