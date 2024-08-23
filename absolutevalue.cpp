#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the no.";
    cin>>x;
    // if(x>=0){
    //     cout<<x;
    // }
    // else
    //     cout<<-x;
    //now the easy method
    if(x<0) x = -x;
        cout<<x;
}