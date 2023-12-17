#include<iostream>
using namespace std;

bool binarySearch(int *arr , int start , int end , int key){
    if (start > end)
    {
        return false;
    }

    int mid = start + (end - start)/2;
    if (arr[mid] == key)
    {
        return true;
    }
    

    if (arr[mid] < key)
    {
         binarySearch(arr , mid+1 , end , key);
    }else{
         binarySearch(arr , start , mid-1 , key);
    }
    
    
}


int main(){
    const int size = 5;
    int arr[size] = {1 ,2 ,3 ,4 ,5};
    int key = 10;

    int ans = binarySearch(arr ,0, size-1, key );
    if (ans)
    {
        cout<<"Present"<<endl;
    }else{
        cout<<"Absent"<<endl;
    }
    


return 0;
}