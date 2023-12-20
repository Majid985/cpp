#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    arr[n+1]=-1;
    int mx=-1;
    int ans=0;
    for(int i=0; i<n; i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){mx=arr[i]; ans++;}
        mx=max(mx, arr[i]);
    }
    cout<<ans<<endl;

}