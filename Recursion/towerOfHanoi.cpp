#include<iostream>
using namespace std;

void towerOfHanoi(int n, string src, string helper, string dest){
    if (n== 1)
    {
        cout<<"Transfer Disk "<<n<<" from "<<src<<" to "<<dest<<endl;
        return;
    }

    towerOfHanoi(n-1, src, dest, helper);
    cout<<"Transfer Disk "<<n<<" from "<<src<<" to "<<dest<<endl;
    towerOfHanoi(n-1, helper, src, dest);
}

int main(){
    const int n = 3;
    towerOfHanoi(n, "S", "H", "D");
return 0;
}