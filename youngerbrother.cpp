#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"ram's age :";
    cin>>a;
    cout<<"shyam's age :";
    cin>>b;
    cout<<"aryan's age :";
    cin>>c;
    if(a<b){
        if(a<c){
            cout<<"ram is the youngest one";
        }
        else cout<<"aryan is the youngest one";
    }
    else if(b<c){
        cout<<"shyam is the youngest one";
    }
    else(cout<<"aryan is the youngest one");
}