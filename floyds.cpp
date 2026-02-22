#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int num; 
    cout<<"enter the height : ";
    cin>>num;
    for(int i = 0 ; i<num ; i++){
        for(int j = 0; j < i +1 ; j++ ){
            sum+=1;
            cout<<" "<<sum;
        }
        cout<<endl;
    }
}