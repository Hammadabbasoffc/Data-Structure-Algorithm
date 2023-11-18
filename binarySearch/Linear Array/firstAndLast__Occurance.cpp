#include<iostream>
using namespace std;

int firstOccurance(int arr[] , int n , int key){
    int s = 0 , e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while( s <= e){
        if(arr[mid] == key){
            ans = mid;
            e = mid -1;
        }else if (key > arr[mid] )
        {
            s = mid +1;
        }else if (key < arr[mid])
        {
            e = mid -1;
        } 
        
        mid = s + (e-s)/2;
    }

    return ans;
}

int lastOccurance(int arr[] , int n , int key){
    int s = 0 , e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while( s <= e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }else if (key > arr[mid] )
        {
            s = mid +1;
        }else if (key < arr[mid])
        {
            e = mid -1;
        } 
        
        mid = s + (e-s)/2;
    }

    return ans;
}
int main(){

    int even[5] = {3,2,3,3,3};
    cout<<"First occurence is "<<firstOccurance(even , 5 , 3) << " Last occurence is "<<lastOccurance(even , 5 , 3) <<endl;

return 0;
}