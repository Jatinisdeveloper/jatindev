#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"enter the first side :";
    cin>>x;
    cout<<"enter the second side :";
    cin>>y;
    cout<<"enter the third side :";
    cin>>z;
    if((x+y)>z and (y+z)>x and (x+z)>y){
        cout<<"yes, it can form a triangle";
    }
    else{
        cout<<"no, it can't form a triangle";
    }
}