// https://www.codingninjas.com/studio/problems/reverse-the-string_799927?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_13&leftPanelTabValue=SUBMISSION






#include <bits/stdc++.h> 
void stringReverse(string& str , int i , int j){

	if(i>j){
        return;
    }

    swap(str[i] , str[j]);
    i++;
    j--;
	stringReverse(str , i ,  j);
}


string reverseString(string str)
{
	stringReverse(str , 0 , str.length()-1);
	return str;
}