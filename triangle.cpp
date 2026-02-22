#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter height of pattern : ";
    cin>>num;
    for(int i = 1 ; i<=num ; i++){
        for(int j = 0 ; j<i ; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}