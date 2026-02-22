#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter height of the pattern: ";
    cin>>num;
    char c = 'A';
    for(int i = 1 ; i <= num; i++){
        for(int j = 0; j<i ; j++){
            cout<<" "<<c;
        }
        cout<<endl;
        c++;
    }
}