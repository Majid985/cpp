#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){


            //  SELECTION SORT44
    // for(int i=0; i<n-1; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i]>arr[j]){
    //             int temp=arr[i];
    //             arr[i]=arr[j];
    //             arr[j]=temp;

    //         }
    //     }
    // }
    int s=0, e=n;
    while (s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key){return mid;}
        else if(arr[mid]>key){e=mid-1;}
        else {s=mid+1;}
    }
    return -1;
}

int main(){
    int n, key;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>key;
    cout<<binarySearch(arr, n, key)<<endl;


}