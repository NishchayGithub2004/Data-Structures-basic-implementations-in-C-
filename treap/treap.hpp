#ifndef TREAP_HPP
#define TREAP_HPP

// C++ code to implement a treap.

// All the information about treap and this project will be provided in the readme files.

// Include header files

#include <iostream>
#include <cstdlib>
using namespace std;

// Create a structure describing the properties of nodes present in the treap

class TreapNode
{
    public:
    
    int data, priority;
    TreapNode *left, *right;

    TreapNode(int data)
    {
        this->data = data;
        this->priority = rand() % 100;
        this->left = this->right = nullptr;
    }
};

// Create a class

class Treap
{
    private: TreapNode* root; // create a pointer 'root' that would point to the root node of the tree

    TreapNode* leftRotate(TreapNode* x);

    TreapNode* rightRotate(TreapNode* y);

    TreapNode* insertNodeHelper(TreapNode* root, int value);

    TreapNode* deleteNodeHelper(TreapNode* root, int value, bool& isDeleted);

    TreapNode* searchNodeHelper(TreapNode* root, int value);

    TreapNode* updateNodeHelper(TreapNode* root, int oldValue, int newValue, bool& isUpdated);

    void preOrderHelper(TreapNode* root);

    void inOrderHelper(TreapNode* root);

    void postOrderHelper(TreapNode* root);

    public: Treap() {root = nullptr;}

    void insertNode(int value);

    void deleteNode(int value);

    void searchNode(int value);

    void updateNode(int oldValue, int newValue);

    void preOrder();

    void inOrder();

    void postOrder();
};

#endif