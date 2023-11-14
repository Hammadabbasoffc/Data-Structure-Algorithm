#include<iostream>
using namespace std;

string reverse(string str){
    int st = 0 , e = str.size()-1;

    while(st<e){
        swap(str[st++] , str[e--]);
    }
    return str;
}

bool checkPalindrome(string s)
{
    string str = reverse(s);
    if(s == str){
        return true;
    }
}

int main(){

bool check = checkPalindrome("mom");
cout<<check<<endl;



return 0;
}


