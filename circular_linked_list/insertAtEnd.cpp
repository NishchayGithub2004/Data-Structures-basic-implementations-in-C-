#include "circular_linked_list.hpp"
#include<iostream>
using namespace std;

void CircularLinkedList::insertAtEnd(int value)
{
    Node* newNode = new Node(value);

    if (tail == nullptr)
    {
        tail = newNode;
        newNode->next = newNode;
    }

    else
    {
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    }

    cout << "\n\n" << value << " inserted at the end of the linked list successfully";
}