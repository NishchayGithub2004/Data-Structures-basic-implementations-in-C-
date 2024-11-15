#include "BST.hpp"
#include "insertNode.cpp"
#include "deleteNode.cpp"
#include "searchNode.cpp"
#include "updateNode.cpp"
#include "preOrder.cpp"
#include "inOrder.cpp"
#include "postOrder.cpp"

int main()
{
    BST bst;
    int choice, value, oldValue, newValue;

    while (true)
    {
        cout << "\n\nMAIN MENU\n\n";
        cout << "1. Insert node";
        cout << "\n2. Delete node";
        cout << "\n3. Search node";
        cout << "\n4. Update node";
        cout << "\n5. Pre order traversal";
        cout << "\n6. In order traversal";
        cout << "\n7. Post order traversal";
        cout << "\n8. Exit";
        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            cout << "\nEnter value to insert : ";
            cin >> value;
            bst.insertNode(value);
            break;

            case 2:
            cout << "\nEnter value to delete : ";
            cin >> value;
            bst.deleteNode(value);
            break;

            case 3:
            cout << "\nEnter value to search : ";
            cin >> value;
            bst.searchNode(value);
            break;
            
            case 4:
            cout << "\nEnter value to replace : ";
            cin >> oldValue;
            cout << "\nEnter replacing value : ";
            cin >> newValue;
            bst.updateNode(oldValue,newValue);
            break;

            case 5: bst.preOrder(); break;

            case 6: bst.inOrder(); break;

            case 7: bst.postOrder(); break;

            case 8: cout << "\nProgram exited successfully"; return 0;

            default: cout << "\nPlease enter a valid option"; break;
        }
    }
}