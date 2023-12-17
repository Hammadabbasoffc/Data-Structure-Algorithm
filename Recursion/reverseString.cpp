#include<iostream>
using namespace std;

void stringReverse(string& str , int i , int j){
    if(i>j){
        return;
    }

    swap(str[i] , str[j]);
    i++;
    j--;
}

int main(){

    string name = "Hammad";
    stringReverse(name , 0 , name.length() -1);
    cout<<name<<endl;


return 0;
}