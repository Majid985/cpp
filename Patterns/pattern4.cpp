#include<iostream>
using namespace std;
int main(){
    int n;
    char c;
    cin>>n;
    cin>>c;
    for(int i = 0;i<n; i++){
        for(int j=i; j<n+n;j++){
            if (n-j>0)
            {
                cout<<" ";
            }
            else{
                cout<<c<<" ";
            }
            
        }
        cout<<endl;
    }
}