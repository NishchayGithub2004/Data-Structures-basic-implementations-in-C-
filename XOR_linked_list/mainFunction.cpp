#include "XORLinkedList.hpp"
#include "deleteFromBeginning.cpp"
#include "deleteFromEnd.cpp"
#include "display.cpp"
#include "insertAtBeginning.cpp"
#include "insertAtEnd.cpp"
#include "search.cpp"
#include "update.cpp"
#include <iostream>
using namespace std;

int main()
{
    XORLinkedList ll;
    int option;

    while (true)
    {
        cout << "\n\nMAIN MENU\n\n";
        cout << "1. Insertion at the beginning";
        cout << "\n2. Insertion at the end";
        cout << "\n3. Deletion from the beginning";
        cout << "\n4. Deletion from the end";
        cout << "\n5. Display nodes";
        cout << "\n6. Search for a node";
        cout << "\n7. Update a node's value";
        cout << "\n8. Exit";
        
        cout << "\n\nEnter your choice : ";
        cin >> option;

        switch(option)
        {
            case 1:
            
            ll.insertAtBeginning();
            break;

            case 2:

            ll.insertAtEnd();
            break;

            case 3:

            ll.deleteFromBeginning();
            break;

            case 4:

            ll.deleteFromEnd();
            break;

            case 5:

            ll.display();
            break;

            case 6:

            ll.search();
            break;

            case 7:

            ll.update();
            break;

            case 8:

            {
                cout << "\n\nProgram exited successfully";
                return 0;
            }

            default: cout << "\n\nPlease enter a valid option";
        }
    }
}