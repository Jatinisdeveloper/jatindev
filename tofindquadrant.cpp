#include<iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"enter first no.";
    cin>>x;
    cout<<"enter secont no.";
    cin>>y;
    if(x>0){
        if(y>0){
            cout<<"1st quadrant";
        }
        else if(y<0){
            cout<<"4th quadrant";
        }
        else(cout<<"x-axis");   
    }
    else if(x<0){
        if(y>0){
            cout<<"2nd quadrant";
        }
        else if(y<0){
            cout<<"3rd quadrant";
        }
        else(cout<<"x-axis");
    }
    else if(x==0){
        if(y==0){
            cout<<"origin";
        }
        else(cout<<"y-axis");
    }
}