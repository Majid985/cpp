#include<iostream>
using namespace std;

bool check(int n){
    return (n && !(n & n-1));
}

int main(){
    int n;
    cin>>n;
    if(check(n)){cout<<n<<" is power of 2\n";}
    else {cout<<n<<" is not power of 2 \n";}
}