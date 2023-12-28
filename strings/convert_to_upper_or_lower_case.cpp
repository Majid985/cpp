#include<iostream>
#include<string>

using namespace std;

int main(){

    string c;
    int convert;
    cout<<"enter your string::  ";
    getline(cin, c);
    cout<<"1: to UPPER \n2: to lower\n>>";
    cin>>convert;
    switch (convert){
        case 1:
            for(int i=0; i<c.length(); i++){
                if(c[i]>='a' && c[i]<='z'){
                    c[i]-=32;
                }
            }
            cout<<c<<endl;
            break;
        
        case 2:
            for(int i=0; i<c.length(); i++){
                if(c[i]>='A' && c[i]<='Z'){
                    c[i]+=32;
                }
            }
            cout<<c<<endl;
            break;
        default:
            cout<<"wrong input"<<endl;
    }
    return 0;
}

// INBUILT TRANSFORM
// >>     transform(c.begin(), c.end(), c.begin(), ::toupper()//tolower());