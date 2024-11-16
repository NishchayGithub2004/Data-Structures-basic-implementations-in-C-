#include "treap.hpp"
#include<iostream>
using namespace std;

void Treap::preOrderHelper(TreapNode* root)
{
    if (root != nullptr)
    {
        cout << root->data << " ";
        preOrderHelper(root->left);
        preOrderHelper(root->right);
    }
}

void Treap::inOrderHelper(TreapNode* root)
{
    if (root != nullptr)
    {
        inOrderHelper(root->left);
        cout << root->data << " ";
        inOrderHelper(root->right);
    }
}

void Treap::postOrderHelper(TreapNode* root)
{
    if (root != nullptr)
    {
        postOrderHelper(root->left);
        postOrderHelper(root->right);
        cout << root->data << " ";
    }
}

void Treap::preOrder() {preOrderHelper(root);}

void Treap::inOrder() {inOrderHelper(root);}

void Treap::postOrder() {postOrderHelper(root);}