#include<iostream>
using namespace std;

int isPrime(int n){
    if (n <= 1)
    {
        return false;
    }
    
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            return false;
        }
    }

    return true;    
}

int main(){
    int n;
    cout<<"Enter The Number : ";
    cin>>n;
    if (isPrime(n))
    {
        cout<<"It is Prime Number "<<endl;
    }else{
        cout<<"This is not a Prime number"<<endl;
    }
    
return 0;
}