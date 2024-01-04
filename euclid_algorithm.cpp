#include<iostream>
using namespace std;

int euclid(int a, int b){
    while(b){
        int temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}

int main(){
    int a, b;
    cin>>a>>b;
    cout<<euclid(a, b)<<endl;
    return 0;
}