#include<iostream>
#include<queue>
using namespace std;
int main(){
// Max Heap

priority_queue<int> maxi;

// min Heap

priority_queue<int , vector<int> , greater<int>> mini;

maxi.push(1);
maxi.push(3);
maxi.push(5);
maxi.push(7);

int n = maxi.size();

for (int i = 0; i < n; i++)
{
    cout<<maxi.top()<<endl;
    maxi.pop();
}


mini.push(9);
mini.push(10);
mini.push(3);
mini.push(1);

int m = mini.size();

for (int i = 0; i < m; i++)
{
    cout<<mini.top()<<endl;
    mini.pop();
}

cout<<"Is Empty->>"<<maxi.empty()<<endl;

return 0;
}