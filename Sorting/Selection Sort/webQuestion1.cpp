/*
https://www.codingninjas.com/studio/problems/selection-sort_981162?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTabValue=SUBMISSION
*/

// #include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    for(int i = 0; i < n-1; i++){

        int minIndex = i;

        for(int j = i+1; j < n; j++){

            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }

        swap(arr[minIndex] , arr[i]);

    }
}