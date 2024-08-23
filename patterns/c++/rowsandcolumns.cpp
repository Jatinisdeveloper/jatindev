#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter no. of rows ";
    cin>>x;
    cout<<"enter no. of cols ";
    cin>>y;
    for(int i = 1;i<=x;i++){
            for(int z=1;z<=y;z++){
                cout<<"* ";
            }
            cout<<endl;
    }
}