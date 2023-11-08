#include <iostream>
#include<vector>
using namespace std;

/*
https://www.codingninjas.com/studio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTabValue=PROBLEM
*/

int firstOccurance(vector<int>& arr , int n , int key){
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

int lastOccurance(vector<int>& arr , int n , int key){
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


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int , int> p;
    p.first = firstOccurance(arr , n , k);
    p.second = lastOccurance(arr , n , k);

    return p;
}
