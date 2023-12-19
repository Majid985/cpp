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
    // cout<<"enter number : ";
    int num; 
    cin>>num;
    // cout<<num<<"! = "<<fac(num)<<endl;
    cout<<fac(num)<<endl;
}