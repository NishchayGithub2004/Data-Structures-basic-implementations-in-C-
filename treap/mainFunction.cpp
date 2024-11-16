#include "treap.hpp"
#include "left_and_right_rotate.cpp"
#include "insertNode.cpp"
#include "deleteNode.cpp"
#include "traversal.cpp"

int main()
{
    Treap treap;
    int choice, value;

    do
    {
        cout << "\n\nMAIN MENU\n\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Preorder Traversal\n";
        cout << "4. Inorder Traversal\n";
        cout << "5. Postorder Traversal\n";
        cout << "6. Exit\n\n";
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "\n\nEnter value to insert : ";
                cin >> value;
                treap.insertNode(value);
                break;

            case 2:
                cout << "\n\nEnter value to delete : ";
                cin >> value;
                treap.deleteNode(value);
                break;

            case 3:
                cout << "\n\nPreorder Traversal: ";
                treap.preOrder();
                break;

            case 4:
                cout << "\n\nInorder Traversal: ";
                treap.inOrder();
                break;

            case 5:
                cout << "\n\nPostorder Traversal: ";
                treap.postOrder();
                break;

            case 6:
                cout << "\n\nExiting...";
                break;

            default:
                cout << "\n\nInvalid choice. Please try again.";
                break;
        }
    } while (choice != 8);

    return 0;
}