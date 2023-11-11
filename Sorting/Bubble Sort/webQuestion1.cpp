/*
https://www.codingninjas.com/studio/problems/bubble-sort_980524?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTabValue=SUBMISSION

*/

#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i = 1; i<n; i++){

        for(int j = 0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}


// optimize this code

// it is inplace and stable algorithm


void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i = 1; i<n; i++){

        bool swaped = false;

        for(int j = 0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swaped = true;
            }
        }

        if (swaped == false)
        {
            break;
        }
        
    }
}