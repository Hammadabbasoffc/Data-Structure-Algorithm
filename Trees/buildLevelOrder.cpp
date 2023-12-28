#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// Node* buildLevelOrderTree(Node* root){
//     queue<Node*> q;
//     int data;
//     cout<<"Enter the Root Data : ";
//     cin>>data;
//     root = new Node(data);
//     q.push(root);

//     while (!q.empty())
//     {
//         Node* temp = q.front();
//         q.pop();

//         cout<<"Enter the data for left of "<<temp->data<<" : ";
//         int leftData;
//         cin>>leftData;

//         if (leftData != -1)
//         {
//             temp->left = new Node(leftData);
//             q.push(temp->left);
//         }

//         cout<<"Enter the data for Right of "<<temp->data<<" : ";
//         int rightData;
//         cin>>rightData;

//         if (rightData != -1)
//         {
//             temp->left = new Node(rightData);
//             q.push(temp->right);
//         }
        
//     }

//     return root;
    
// }

void buildFromLevelOrder(node* &root) {
    queue<node*> q;

    cout << "Enter data for root" << endl;
    int data ;
    cin >> data;
    root = new node(data);
    
    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1) {
            temp -> left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp -> right = new node(rightData);
            q.push(temp->right);
        }
    }
 }

 void levelOrderTraversal(node *root)
    {
        queue<node *> q;
        q.push(root);
        q.push(NULL);

        while (!q.empty())
        {
            node *temp = q.front();
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



int main(){

    node* root = NULL;
    buildFromLevelOrder(root);
    levelOrderTraversal(root);
return 0;
}