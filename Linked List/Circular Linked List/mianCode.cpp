#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout<<"Memory is free with data "<<value<<endl;
    }
};

void  insertion(Node* &tail, int element, int data){
    if (tail == NULL)
    {
        Node* temp = new Node(data);
        tail = temp;
        temp->next = temp;
    }else{
        Node* current = tail;

        while (current->data != element)
        {
            current = current->next;
        }

        Node* temp = new Node(data);
        temp->next = current->next;
        current->next = temp;
    }
    
}

void print(Node* tail){
    Node* temp = tail;

    do
    {
        cout<<tail->data<<" ";
        tail = tail->next;
    } while (temp != tail);
    
}
 
int main(){

    Node* tail = NULL;

    insertion(tail, 5 , 3);
    insertion(tail, 3 , 12);
    print(tail);
return 0;
}