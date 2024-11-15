#include "singly_linked_list.hpp"
#include<iostream>
using namespace std;

void SinglyLinkedList::insertAtBeginning(int value)
{
    Node* newNode = new Node(value);
    
    if (head == nullptr) head = newNode;

    else
    {
        newNode->next = head;
        head = newNode;
    }

    cout << "\n\n" << value << " successfully inserted in the beginning of the linked list";
}