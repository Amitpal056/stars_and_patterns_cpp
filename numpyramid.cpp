#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter the height of pattern : ";
    cin>>num;

    for(int i = 1 ; i<=num ; i++){
        //spaces---
        for(int j = 0; j<num-i ; j++){
            cout<<"  ";
        }
        //first pyramid---
        for(int j = 0 ; j<i ; j++){
            cout<<j+1;
            cout<<" ";
        }
        //second pyramid---
        for( int j = i-1 ; j > 0 ; j--){
            cout<<j;
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}