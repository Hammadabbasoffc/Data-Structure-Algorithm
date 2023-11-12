/*
https://www.codingninjas.com/studio/problems/reverse-the-array_1262298?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio3&leftPanelTabValue=SUBMISSION
*/

#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
	int s = 0, e = arr.size()-1;

	while(m < e){
		swap(arr[m+1] , arr[e]);
		m++;
		e--;
	}
	// return arr;
}
