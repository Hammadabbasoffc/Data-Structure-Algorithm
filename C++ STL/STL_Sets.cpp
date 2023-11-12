#include<iostream>
#include<set>
using namespace std;
int main(){

set<int>s;

s.insert(1);
s.insert(3);
s.insert(5);
s.insert(7);

for(int i : s){
    cout<<i<<endl;
}cout<<endl;

set<int>::iterator it = s.begin();
it++;

s.erase(it);

for(int i : s){
    cout<<i<<endl;
}cout<<endl;


cout<<"2 is present or not ->"<<s.count(2)<<endl;

set<int>::iterator itr = s.find(5);

cout<<"Value present at "<<*it<<endl;
return 0;
}