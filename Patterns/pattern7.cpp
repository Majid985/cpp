#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;


    //  UPPER TRIANGLE
    for(int i=1; i<=n; i++){
        int m=i;
        int a=1;
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i+i-1; j++){
            if(m>=1){
                // cout<<m;
                cout<<"* ";
                m--;
            }
            else{
                a++;
                // cout<<a;
                cout<<"* ";
            }

           
        }
        cout<<endl;
    }

//   INVERTED   TRIANGLE
    for(int i=n-1; i>=1; i--){
        int m=i;
        int a=1;
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i+i-1; j++){
            if(m>=1){
                // cout<<m;
                cout<<"* ";
                m--;
            }
            else{
                a++;
                // cout<<a;
                cout<<"* ";
            }

           
        }
        cout<<endl;
    }


}