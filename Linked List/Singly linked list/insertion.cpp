#include<iostream>
using namespace std;

class Node{
    private:
    
    public:
    int data;
    Node* next;
    Node(int data){
        this ->data = data;
        this->next = NULL;
    } 
};

void Insertion(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;

}

void print(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data <<" ";
        temp = temp ->next;
    }  
}

int main(){
    Node* node1 = new Node(19);
    
    // creat head
    Node* head =  node1;
    print(head);
    Insertion(head , 12);
    print(head);


return 0;
}