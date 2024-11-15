#include "doubly_linked_list.hpp"
#include<iostream>
using namespace std;

void DoublyLinkedList::insertAtBeginning(int value)
{
    Node* newNode = new Node(value);

    if (head == nullptr)
    {
        head = tail = newNode;
    }

    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    cout << "\n\n" << value << " successfully inserted in the beginning of the linked list";
}