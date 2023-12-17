#include<iostream>
using namespace std;

bool searchArray(int *arr , int size, int key){
    if(size == 0){
        return false;
    }

    if(arr[0] == key){
        return true;
    }else{
        bool remainingPart = searchArray(arr+1 , size-1 , key);
        return remainingPart;
    }
}

int main(){

    int arr[5] = {1 ,2 ,3 ,4 ,5};
    int key = 10;

    bool ans = searchArray(arr , 5, key);
    if(ans){
        cout<<"Present"<<endl;
    }else{
        cout<<"Absent"<<endl;
    }

return 0;
}