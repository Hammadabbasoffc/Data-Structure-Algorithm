#include<iostream>
#include<array>
using namespace std;
int main(){

array<int , 4> a = {1,2,3,4};

int size = a.size();

for (int i = 0; i < size; i++)
{
    cout<<a[i]<<endl;
}

cout<<"Element at Index 3 is : "<<a.at(3)<<endl;

cout<<"Empty or Not -->"<<a.empty()<<endl;

cout<<"First Element -> "<<a.front()<<endl;
cout<<"Last Element -> "<<a.back()<<endl;



return 0;
}