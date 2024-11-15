#include "singly_linked_list.hpp"
#include<iostream>
using namespace std;

void SinglyLinkedList::deleteFromBeginning()
{
    if (head == nullptr)
    {
        cout << "\n\nLinked list is empty";
        return;
    }

    if (head->next == nullptr)
    {
        Node* temp = head;
        head = nullptr;
        delete temp;
    }

    else
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    cout << "\n\nNode from the beginning of the linked list deleted successfully";
}