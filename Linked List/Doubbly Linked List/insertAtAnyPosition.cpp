#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getLength(Node* &head){
    Node* temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertionAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertionAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail ->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtAnyPosition(Node* &tail, Node* &head, int position ,int data){
    if (position == 1)
    {
        insertionAtHead(head, data);
        return;
    }

    Node* temp = head;
    int count = 1;
    while (count < position-1)
    {
        temp = temp->next;
        count++; 
    }
    

    if (temp->next == NULL)
    {
        insertionAtTail(tail, data);
        return;
    }

    Node* nodeToInsert = new Node(data);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;    

}

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertionAtHead(head, 12);
    print(head);
    insertionAtTail(tail, 112);
    print(head);

    insertAtAnyPosition(tail, head, 2, 11223);
    print(head);
    cout<<"Length is : "<<getLength(head)<<endl;

return 0;
}