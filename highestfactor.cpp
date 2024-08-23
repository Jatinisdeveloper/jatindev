#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your no. ";
    cin>>n;
    for(int i=n/2;i>0;i--){
        if(n%i==0){
            cout<<i<<" is the greatest factor  ";
        }
        break;
    }
}