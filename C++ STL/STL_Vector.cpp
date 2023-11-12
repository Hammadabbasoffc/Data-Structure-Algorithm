// this is dynamic bcz it can change their size according to need of it

#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int> v;

// another way to initilize it

vector<int> a(5,1);

for (int i:a)
{
    cout<<"A Element "<<i<<endl;
}cout<<endl;

cout<<"Pritn Last "<<endl;
vector<int> last(a);
for (int i:last)
{
    cout<<"last Element "<<i<<endl;
}cout<<endl;



cout<<"Vector Capacity -->"<<v.capacity()<<endl;

v.push_back(1);
cout<<"Vector Capacity -->"<<v.capacity()<<endl;

v.push_back(2);
cout<<"Vector Capacity -->"<<v.capacity()<<endl;

v.push_back(3);
cout<<"Vector Capacity -->"<<v.capacity()<<endl;

v.push_back(4);
cout<<"Vector Capacity -->"<<v.capacity()<<endl;
cout<<"Vector Size -->"<<v.size()<<endl;

cout<<"Before Pop"<<endl;
for (int i : v)
{
    cout<<i<<" ";
}
cout<<endl;

v.pop_back();


cout<<"After Pop"<<endl;
for (int i : v)
{
    cout<<i<<" ";
}
cout<<endl;

cout<<"Before Clear -->"<<endl;
for (int i : v)
{
    cout<<i<<" ";
}cout<<endl;
v.clear();
cout<<"After clear -->"<<endl;
for (int i : v)
{
    cout<<i<<" ";
}

return 0;
}