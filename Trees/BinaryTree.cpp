#include <iostream>
using namespace std;

class Node
{
private:
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{
    int data;
    cout << "Enter the Data : ";
    cin >> data;
    root = new Node(data);
    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data for inserting in left of " << data << " : "<<endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for inserting in right of " << data << " : "<<endl;
    root->right = buildTree(root->right);

    return root;
}

int main()
{

    Node *root = NULL;
    root = buildTree(root);

    return 0;
}