#include "treap.hpp"

TreapNode* Treap::leftRotate(TreapNode* x)
{
    TreapNode* y = x->right;
    TreapNode* T2 = y->left;
    y->left = x;
    x->right = T2;
    return y;
}

TreapNode* Treap::rightRotate(TreapNode* y)
{
    TreapNode* x = y->left;
    TreapNode* T2 = x->right;
    x->right = y;
    y->left = T2;
    return x;
}