#include "circular_doubly_linked_list.hpp"
#include "insertAtBeginning.cpp"
#include "insertAtEnd.cpp"
#include "deleteFromBeginning.cpp"
#include "deleteFromEnd.cpp"
#include "search.cpp"
#include "update.cpp"
#include "display.cpp"
#include "predecessor.cpp"
#include "successor.cpp"
#include<iostream>
using namespace std;

int main()
{
    CircularDoublyLinkedList list;
    int choice, value, oldValue, newValue;

    while (true)
    {
        cout << "\n\nMAIN MENU\n\n";
        cout << "1. Insert at beginning";
        cout << "\n2. Insert at end";
        cout << "\n3. Delete from beginning";
        cout << "\n4. Delete from end";
        cout << "\n5. Search";
        cout << "\n6. Update";
        cout << "\n7. Display";
        cout << "\n8. Predecessor";
        cout << "\n9. Successor";
        cout << "\n10. Exit";
        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:

            cout << "\n\nEnter value to insert at the beginning : ";
            cin >> value;
            list.insertAtBeginning(value);
            break;

            case 2:

            cout << "\n\nEnter value to insert at the end : ";
            cin >> value;
            list.insertAtEnd(value);
            break;

            case 3: list.deleteFromBeginning(); break;

            case 4: list.deleteFromEnd(); break;

            case 5:

            cout << "\n\nEnter value to search for : ";
            cin >> value;
            list.search(value);
            break;

            case 6:

            cout << "\n\nEnter value to replace : ";
            cin >> oldValue;

            cout << "\n\nEnter replacing value : ";
            cin >> newValue;

            list.update(oldValue,newValue);
            break;

            case 7: list.display(); break;

            case 8:

            cout << "\n\nEnter value to find predecessor of : ";
            cin >> value;
            list.predecessor(value);
            break;

            case 9:

            cout << "\n\nEnter value to find successor of : ";
            cin >> value;
            list.successor(value);
            break;

            case 10: cout << "\n\nProgram exited successfully"; return 0;

            default: cout << "\n\nPlease enter a valid option"; break;
        }
    }
}