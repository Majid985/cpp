#include<iostream>
using namespace std;

long int fac(int num){
    long int factorial=1;
    for(num; num>1; num--){
        factorial=factorial*num;
    }
    return factorial;
}

int main(){
    int n, r;
    cout<<"enter the values of (n and r) : ";
    cin>>n>>r;
    cout<<fac(n)/(fac(n-r)*fac(r))<<endl;
    
}