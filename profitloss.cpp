#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"enter cost price :";
    cin>>cp;
    int sp;
    cout<<"enter the selling price:";
    cin>>sp;
    if(cp<sp){
        cout<<"profit of :"<<sp-cp;
    }
    else{
        cout<<"loss of :"<<cp-sp;
    }
}