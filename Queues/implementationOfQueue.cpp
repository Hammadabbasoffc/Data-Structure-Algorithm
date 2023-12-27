#include<iostream>
using namespace std;

class Queue {
    private:
        int Qfront;
        int rear;
        int *arr;
        int size;
public:
    Queue() {
        size = 1000;
        Qfront = 0;
        rear = 0;
        arr = new int[size];
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(Qfront == rear)
            return true;
        else{
            return false;
        }
    }

    void enqueue(int data) {
        if(rear == size ){
            return;
        }else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(rear == Qfront){
            return -1;
        }else{
            int ans = arr[Qfront];
            arr[Qfront] = -1;
            Qfront++;
            return ans;
            if(Qfront == rear){
                rear = 0;
                Qfront = 0;
            }
        }
    }

    int front() {
        if(isEmpty()){
            return -1;
        }else{
            return arr[Qfront];
        }
    }
};

int main(){



return 0;
}