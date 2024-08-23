#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your no. ";
    cin>>n;
    int x=1,y=0;
    for(int i = 1;i<=n;i++){
        y= y*10 + x;
        x++;
    }
    for(int j = 1;j<=n;j++){
        cout<<y<<endl;
    }
}