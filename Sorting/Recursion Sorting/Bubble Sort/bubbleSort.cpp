#include<iostream>
using namespace std;

void SortFunction(int *arr, int n){
    if(n == 0 || n == 1){
        return ;
    }

    for(int i = 0; i < n-1; i++){
        if (arr[i] > arr[i+1])
        {
            swap(arr[i] , arr[i+1]);
        }
        
    }

    SortFunction(arr , n -1);
}

int main(){
const int n = 2;
int arr[n] = {9, 1};

SortFunction(arr , n);

for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
}

return 0;
}