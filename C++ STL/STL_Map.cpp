#include<iostream>
#include<map>
using namespace std;
int main(){

map<int, string> m;

m[1] = "Hammad";
m[4] = "Abbas";
m[18] = "Programmer";

m.insert(make_pair(2, "aveen"));


for(auto i: m){
    cout<<i.first<<" "<<i.second<<endl;
}


return 0;
}