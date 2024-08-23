// to find the greatest factor of a no.
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter your no. ";
    cin>>x;
    int y=1;
    for(int i=1;i<=(x/2);i++){
        if(x%i==0){
        y = i;}
    }
        cout<<y<<endl;
}