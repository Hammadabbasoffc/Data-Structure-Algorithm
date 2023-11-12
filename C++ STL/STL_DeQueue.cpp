#include<iostream>
#include<deque>
using namespace std;
int main(){

deque<int> d;

d.push_back(1);
d.push_front(2);

for(int i : d){
    cout<<"Elements ->"<<i<<endl;
}cout<<endl;

// d.pop_front();

for(int i : d){
    cout<<"Elements ->"<<i<<endl;
}cout<<endl;

cout<<"Pritn First Index -> "<<d.at(1)<<endl;

cout<<"Front Element -> "<<d.front()<<endl;
cout<<"Back Element -> "<<d.back()<<endl;

cout<<"Empty Or not ->"<<d.empty()<<endl;



return 0;
}