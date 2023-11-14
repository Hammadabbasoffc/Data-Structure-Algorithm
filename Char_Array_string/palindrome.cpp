#include<iostream>
using namespace std;

bool lowerCase(char ch){
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }else{
        char temp = ch-'A'+'a';
        return temp;
    }
    
}

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


