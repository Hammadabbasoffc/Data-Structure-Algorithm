#include<iostream>
#include<stack>
using namespace std;
int main(){

stack <int> st;

st.push(2);
st.push(4);
st.push(90);

cout<<st.size()<<endl;
cout<<st.top()<<endl;

return 0;
}