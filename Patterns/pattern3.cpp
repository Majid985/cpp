#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int decision=1;
    for (int i = 0; i<n; i++){
        for(int j=0; j<i; j++){
            
            if(decision==1){
                cout<<"1 ";
                decision=0;
            }
            else{
                cout<<"0 ";
                decision=1;
            }
        }
        cout<<endl;
    }
}