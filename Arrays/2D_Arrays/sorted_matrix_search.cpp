#include<iostream>
using namespace std;
int main(){
    int m, n;
    cin>>m>>n;
    int key;
    cin>>key;
    int mat[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){cin>>mat[i][j];}
    }

    // SEARCH ALGORITHM
    int r=0, c=n-1;
    bool found;
    while(r<m && c>=0){
        if(mat[r][c]==key){
            found=true;
            cout<<"("<<r<<", "<<c<<")"<<endl;
            break;
        }
        if(mat[r][c]>key){c--;}
        else{r++;}

    }
    if(!found){
        cout<<"element not found"<<endl;
    }
}
