#include<iostream>
#include<climits>
using namespace std;


int main(){
    int maxNo=INT_MIN, minNo=INT_MAX;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        // if(max<arr[i]){max=arr[i];}
        maxNo=max(maxNo, arr[i]);

        // if(min>arr[i]){min=arr[i];}
        minNo=min(minNo, arr[i]);
    }

    cout<<"max = "<<maxNo<<" and min = "<<minNo<<endl;

    
}