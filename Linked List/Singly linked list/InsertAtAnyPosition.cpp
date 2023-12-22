#include <iostream>
using namespace std;

class Node
{
public:
    Node *next;
    int data;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtanyPosition(Node* &tail,Node *&head, int position, int data)
{
    Node *temp = head;
    int count = 1;
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp ->next == NULL)
    {
        insertAtTail(tail , data);
    }
    

    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}



void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{

    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;


    insertAtTail(tail, 13);
    insertAtTail(tail, 11);
    insertAtTail(tail, 112);
    print(head);
    cout << endl;

    insertAtanyPosition(tail,head , 2, 1124);
    insertAtanyPosition(tail, head ,1, 0);

    print(head);
    return 0;
}