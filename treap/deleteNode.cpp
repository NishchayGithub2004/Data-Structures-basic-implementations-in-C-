#include "treap.hpp"

TreapNode* Treap::deleteNodeHelper(TreapNode* root, int value, bool& isDeleted)
{
    if (root == nullptr)
    {
        isDeleted = false;
        return root;
    }

    if (value < root->data) root->left = deleteNodeHelper(root->left, value, isDeleted);

    else if (value > root->data) root->right = deleteNodeHelper(root->right, value, isDeleted);

    else
    {
        isDeleted = true;

        if (!root->left)
        {
            TreapNode* temp = root->right;
            delete root;
            return temp;
        }

        else if (!root->right)
        {
            TreapNode* temp = root->left;
            delete root;
            return temp;
        }

        if (root->left->priority > root->right->priority)
        {
            root = rightRotate(root);
            root->right = deleteNodeHelper(root->right, value, isDeleted);
        }

        else
        {
            root = leftRotate(root);
            root->left = deleteNodeHelper(root->left, value, isDeleted);
        }
    }

    return root;
}

void Treap::deleteNode(int value)
{
    bool isDeleted = false;

    root = deleteNodeHelper(root, value, isDeleted);

    if (isDeleted) cout << "\n\n" << value << " successfully deleted from the treap";

    else cout << "\n\n" << value << " was not found in the treap";
}