#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int pd=arr[1]-arr[0];
    int len=2;
    int maxi=len;

    for(int i=2; i<n; i++){
        if(pd==arr[i]-arr[i-1]){
            len++;
        }
        else{
            pd=arr[i]-arr[i-1];
            len=2;
        }
         maxi=max(maxi, len);
    }
    cout<<maxi<<endl;
}