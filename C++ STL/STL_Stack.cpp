#include <iostream>
#include <stack>
using namespace std;
int main()
{

    stack<string> s;

    s.push("hello");
    s.push("Hammad");
    s.push("Abbas");

    cout << "Top Element is -> " << s.top() << endl;

    s.pop();

    cout << "Top Element is -> " << s.top() << endl;

    return 0;
}