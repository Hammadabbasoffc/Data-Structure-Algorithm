#include<iostream>
using namespace std;

void reachHome(int src , int dest){

    cout<<" Src "<<src<<" Destination "<<dest<<endl;

    if(src == dest){
        cout<<"You reached to Your Home "<<endl;
        return ;
    }

    src++;

    reachHome(src , dest);

}

int main(){

int src = 1;
int dest = 10;

reachHome(src , dest);

return 0;
}