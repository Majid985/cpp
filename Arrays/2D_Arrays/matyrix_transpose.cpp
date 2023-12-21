#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int arr[m][m];
    int arr2[m][m];

    // GET MATRIX CONTENT
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    // Transpose matrix
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            arr2[j][i]=arr[i][j]; 
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
           cout<<arr2[i][j]<<" "; 
        }
        cout<<endl;
    }


}