#include<iostream>
#include<math.h>
using namespace std;
void findPrimeNumbers(int num1, int num2){
    for(int i=num1;i<=num2; i++){
        int isPrime=1;
        for(int j=2; j<sqrt(i); j++){
            if(i%j==0){isPrime=0;break;}
        }
        if(isPrime==1){cout<<i<<endl;}
    }
}

int main(){
    cout<<"enter two numbers : ";
    int num1, num2;
    cin>>num1>>num2;
    findPrimeNumbers(num1, num2);
}