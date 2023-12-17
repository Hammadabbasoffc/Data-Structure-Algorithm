#include<iostream>
using namespace std;

bool isSorted(int *arr , int size){
    if(size == 0 || size == 1){
        return true;
    }else if (arr[0] > arr[1])
    {
        return false;
    }else{
        bool remainingPart = isSorted(arr+1 , size - 1);
        return remainingPart;
    }
    
}

int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    bool ans = isSorted(arr , 5);

    if (ans)
    {
        cout<<"Array is Sorted"<<endl;
    }else{
        cout<<"Array is Not Sorted"<<endl;
    }
     


return 0;
}