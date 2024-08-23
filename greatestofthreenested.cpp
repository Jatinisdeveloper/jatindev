#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"enter 1st no.";
    cin>>x;
    cout<<"enter 2nd no.";
    cin>>y;
    cout<<"enter 3rd no.";
    cin>>z;
    if(x>y){ 
        if(x>z){
            cout<<x<<" is the greatest no.";
        }
        else cout<<z<<" is the greatest no.";
    }
    else{
        if(y>z){
            cout<<y<<" is the greatest no.";
        }
        else cout<<z<<" is the greatest no.";
    }
}