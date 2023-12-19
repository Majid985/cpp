#include<iostream>
using namespace std;

void fibonacii(int upto){
    int a=0, b=1, temp=0;
    for(int i=0;i<upto;i++){
        cout<<a<<", ";
        temp=b;
        b=a+b;
        a=temp;
    }
    cout<<endl;
}
int main(){
    cout<<"enter the number of terms you want : ";
    int terms;
    cin>>terms;
    fibonacii(terms);

}