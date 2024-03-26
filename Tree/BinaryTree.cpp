#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node *leftchild = nullptr;
    Node *rightchild = nullptr;
};

Node *root = nullptr;

void insert(int val)
{
    if (root == nullptr)
    {
        root = new Node();
        root->val = val;
    }
    else
    {
        Node *current = root;
        while (true)
        {
            if (val < current->val)
            {
                if (current->leftchild == nullptr)
                {
                    current->leftchild = new Node();
                    current->leftchild->val = val;
                    break;
                }
                current = current->leftchild;
            }
            else
            {
                if (current->rightchild == nullptr)
                {
                    current->rightchild = new Node();
                    current->rightchild->val = val;
                    break;
                }
                current = current->rightchild;
            }
        }
    }
}

void displayInOrder(Node *node)
{
    if (node != nullptr)
    {
        displayInOrder(node->leftchild);
        cout << node->val << " ";
        displayInOrder(node->rightchild);
    }
}

int main()
{
    insert(5);
    insert(3);
    insert(7);
    insert(2);
    insert(4);
    insert(6);
    insert(8);

    cout << "Values in the tree (in-order traversal): ";
    displayInOrder(root);
    cout << endl;

    return 0;
}
