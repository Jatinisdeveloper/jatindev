#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter length:";
    cin>>x;
    cout<<"enter breadth:";
    cin>>y;
    int a =x*y;
    int p = 2*(x+y);
    cout<<"the area is :"<<a<<endl;
    cout<<"the perimeter is :"<<p<<endl;
    if(a>p){
        cout<<"area is greater by "<<a-p;
    }
    else{
        cout<<"perimeter is greater by "<<p-a<<endl;
    }
}