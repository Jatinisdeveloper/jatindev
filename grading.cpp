#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"enter your marks";
    cin>>x;
    if(x>=81 and x<=100){
        cout<<"very good";
    }
    else if(x>=61 and x<=80){
        cout<<"good";
    }
    else if(x>=41 and x<=60){
        cout<<"poor";
    }
    else if(x<=40){
        cout<<"fail";
    }
}