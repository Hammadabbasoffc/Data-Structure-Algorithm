#include<iostream>
using namespace std;

class Stack{
    private:
    int *arr;
    int size;
    int top;
    public:  

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }else{
            cout<<"Stack is OverFlow"<<endl;
        }
    }

    void pop(){
        if (top >= 0)
        {
            top--;
        }else{
            cout<<"Stack is UnderFlow"<<endl;
        }
    }

    int peek(){
        if (top>= 0)
        {
            return arr[top];
        }else{
            cout<<"Stack Is Empty"<<endl;
        }
    }

    bool isEmpty(){
        if (top == -1)
        {
            return true;
        }else{
            return false;
        }
        
    }

};

int main(){

    Stack st(5);
    st.push(12);
    st.push(13);
    st.push(14);
    st.push(15);

    cout<<st.peek()<<endl;


return 0;
}