#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter your no. ";
    cin>>x;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=(x-i);j++){
            cout<<"  ";
        }
        for(int y=1;y<=i;y++){
            cout<<"* ";
        }
        cout<<endl;
    }
}