#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter the number : ";
    cin>>num;
    for(int i=0; i < num ; i++){
        for(int j = 1 ; j<=num ; j++){
            cout<<j*j<<" ";
        }
        cout<<endl;
    }

    return 0;
}