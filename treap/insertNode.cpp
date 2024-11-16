#include "treap.hpp"

TreapNode* Treap::insertNodeHelper(TreapNode* root, int value, bool& isInserted)
{
    if (root == nullptr) 
    {
        isInserted = true;
        return new TreapNode(value);
    }

    if (value < root->data)
    {
        root->left = insertNodeHelper(root->left, value);

        if (root->left->priority > root->priority) root = rightRotate(root);
    }

    else if (value > root->data)
    {
        root->right = insertNodeHelper(root->right, value);

        if (root->right->priority > root->priority) root = leftRotate(root);
    }

    else
    {
        isInserted = false;
        return root;
    }

    return root;
}

void Treap::insertNode(int value)
{
    bool isInserted = false;

    root = insertNodeHelper(root, value, isInserted);

    if (isInserted) cout << "\n" << value << " successfully inserted into the treap";

    cout << "\n" << value << " already exists in the treap";
}