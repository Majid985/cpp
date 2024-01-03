#include<iostream>
using namespace std;

int findUnique(int arr[], int n){
    int xorsum=0;
    for (int i=0; i<n; i++){
        xorsum=xorsum^arr[i];
    }
    return xorsum;
}

int main(){
    int arr[9]={1, 2 , 3 , 4, 4, 3, 5, 2, 1};
    cout<<findUnique(arr,9)<<endl;
    return 0;
}