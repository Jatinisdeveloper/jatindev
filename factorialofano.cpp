#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your no.";
    cin>>n;
    int y=1;
    while(n>0){
        y= y*n;
        n--;
    }
    cout<<"factorial of the given no. is "<<y;
}