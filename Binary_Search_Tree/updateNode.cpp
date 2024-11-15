#include "BST.hpp"

Node* BST::updateNodeHelper(Node* root, int oldValue, int newValue, bool& isUpdated)
{
    bool deleted = false;

    root = deleteNodeHelper(root, oldValue, deleted);

    if (deleted)
    {
        isUpdated = true;
        root = insertNodeHelper(root, newValue);
    }

    else isUpdated = false;

    return root;
}

void BST::updateNode(int oldValue, int newValue)
{
    bool isUpdated = false;

    if (!root) cout << "\nTree is empty";

    else
    {
        root = updateNodeHelper(root, oldValue, newValue, isUpdated);

        if (isUpdated) cout << "\n" << oldValue << " successfully updated to " << newValue;

        else cout << "\n" << oldValue << " not found in the tree";
    }
}