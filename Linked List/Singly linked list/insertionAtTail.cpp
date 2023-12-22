#include<iostream>
using namespace std;

class Node{
    public:
    Node* next;
    int data;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void Insertion(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail ->next = temp;
    tail = temp;
}

void print(Node* &head){
    Node* temp=head;
    while (temp != NULL)
    {
        cout<<temp->data <<" ";
        temp = temp->next;
    }
    
}

int main(){

Node* node1 = new Node(10);

Node* head = node1;
Node* tail = node1;

Insertion(head, 13);

insertAtTail(tail, 12);
insertAtTail(tail, 10);
print(head);

return 0;
}