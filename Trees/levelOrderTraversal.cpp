#include <iostream>
#include <queue>
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

 void levelOrderTraversal(Node *root)
    {
        queue<Node *> q;
        q.push(root);
        q.push(NULL);

        while (!q.empty())
        {
            Node *temp = q.front();
            q.pop();

            if (temp == NULL)
            {
                cout << endl;
                if (!q.empty())
                {
                    q.push(NULL);
                }
            }
            else
            {
                cout << temp->data << " ";
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
        }
    }

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

    cout << "Enter the data for inserting in left of " << data << " : " << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for inserting in right of " << data << " : " << endl;
    root->right = buildTree(root->right);

    return root;
}

int main()
{

    Node *root = NULL;

    root = buildTree(root);
    cout<<"Printing The root tree"<<endl;
    levelOrderTraversal(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    return 0;
}