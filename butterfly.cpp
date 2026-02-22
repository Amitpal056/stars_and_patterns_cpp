#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter the height of pattern : ";
    cin>>num;
    for(int i = 0; i < num ; i++){
        //stars --- 
        for(int j = 0; j<=i ; j++){
            cout<<'*';
        }

        //spaces --- 
        for(int j = 0 ; j<num-i-1;j++){
            cout<<"  ";
        }

        //stars -- 
        for(int j = 0; j<=i; j++){
            cout<<'*';
        }
        cout<<endl;
    }
    for(int i = num; i>0 ; i--){
        //stars -- 
        for(int j = 0 ; j < i ; j++){
            cout<<'*';
        }
        //spaces--
        for(int j = 0 ; j < num - i ; j++){
            cout<<"  ";
        }

        //stars -- 
        for(int j = 0 ; j<i ; j++){
            cout<<'*';
        }
        cout<<endl;
    }
    
    
    return 0;
}