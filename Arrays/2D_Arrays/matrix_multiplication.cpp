#include<iostream>
using namespace std;
int main(){
    int m, n, o;
    cin>>m>>n>>o;
    int a1[m][n];
    int a2[n][o];

    //  GET FIRST MATRIX
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){cin>>a1[i][j];}
    }
    // GET SECOND MATRIX
    for(int i=0; i<n; i++){
        for(int j=0; j<o; j++){cin>>a2[i][j];}
    }


    int ans[m][o];
    for(int i=0; i<m; i++){
        for(int j=0; j<o; j++){ans[i][j]=0;}
    }

    // MULTIPLICATION OF MATRICES
    for(int i=0; i<m; i++){
        for(int j=0; j<o; j++){
            for(int k=0; k<n; k++){
                ans[i][j]+=a1[i][k]*a2[k][j];
            }
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<o; j++){cout<<ans[i][j]<<" ";}
        cout<<endl;
    }

}