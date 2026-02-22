#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter the height of pattern : ";
    cin>>num;
    for(int i = num; i>0 ; i--){
        for(int j = 0 ; j<num ; j++){
            if(j<num-i){
                cout<<" ";
            }else{
                cout<<(num+1)-i;
            }
        }
        cout<<endl;
    }
    
    return 0;
}