#include <iostream>
using namespace std;

void reverse( char name[], int n){
    int s = 0 , e = n-1;
    while (s<e)
    {
        swap(name[s++] , name[e--]);
    }
    
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{

    char name[20];

    cout << "Enter your name : ";
    cin >> name;

    cout << "Your name is : " << name << endl;
    cout << "Length is : " << getLength(name) << endl;
    int n = getLength(name);
    reverse(name, n);
    cout<<"Swap string is : "<<name<<endl;

    return 0;
}