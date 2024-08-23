#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"We have a gp 5,15,45,135...,enter the no. below os terms you want in this gp"<<endl;
    cout<<"enter your no.";
    cin>>x;
    int n=5;
    for(int i=1;i<=x;i++){
        cout<<n<<" ";
        n=n*3;
    }
}