#include<iostream>
using namespace std;

bool setBit(int n, int pos){
    return ((n & (1<<pos))!=0);
}

void unique(int arr[], int n){
    int xorsum=0;
    for (int i=0; i<n; i++){
        xorsum=xorsum^arr[i];
    }

    int temxor=xorsum;
    int setbit=0;
    int pos=0;
    while(!setbit){
        setbit=xorsum & 1;
        pos++;
        xorsum>>=1;
    }
    int newxor=0;
    for(int i=0; i<n; i++){
        if(setBit(arr[i], pos-1)){
            newxor^=arr[i];
        }
    }

    cout<<newxor<<" & "<<(temxor^newxor)<<endl;
}

int main(){
    int arr[10]={1, 2, 3, 4, 6, 6, 8, 3, 2, 1};
    unique(arr, 10);
    return 0;
}