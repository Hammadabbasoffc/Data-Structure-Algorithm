#include<iostream>
#include<queue>
using namespace std;
int main(){

queue <string> q;

q.push("Hammad");
q.push("Abbas");
q.push("Love Coding");

cout<<"First Element -> " <<q.front()<<endl;
cout<<"Size before Pop-> "<<q.size()<<endl;

q.pop();

cout<<"First Element -> " <<q.front()<<endl;
cout<<"Size After Pop-> "<<q.size()<<endl;

return 0;
}