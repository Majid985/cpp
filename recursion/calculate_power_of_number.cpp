#include<iostream>
using namespace std;

int power(int n, int p){
    if(!p){
        return 1;
    }
    int res=power(n, p-1);
    return n*res;
}

int main(){
    int n, p;
    cin>>n>>p;
    cout<<power(n, p);
    return 0;
}