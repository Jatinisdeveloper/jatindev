#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter the side of the square ";
    cin>>n;
    int x = n;
    for(int i = 1;i<=n;i++){
        for(int i=1;i<=x;i++){
            cout<<"* ";
        }
        cout<<endl;
    }   
}