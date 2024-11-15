#include "singly_linked_list.hpp"
#include<iostream>
using namespace std;

void SinglyLinkedList::insertAtEnd(int value)
{
    Node* newNode = new Node(value);

    if (head == nullptr) head = newNode;

    else
    {
        Node* temp = head;
        while (temp->next != nullptr) temp = temp->next;
        temp->next = newNode;
    }

    cout << "\n\n" << value << " successfully inserted in the end of the linked list";
}