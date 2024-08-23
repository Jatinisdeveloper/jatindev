#include<iostream>
using namespace std;
int fact(int x){
    int a=1;
    for(int i=1;i<=x;i++){
        a *= i;
    }
    return a;
}
int ncr(int b,int c){
    int d = fact(b);
    int e= fact(c);
    int f= fact(b-c);
    return d/(e*f);
}
int main(){
    int y;
    cout<<"enter your no. :";
    cin>>y;
    for(int j=0;j<=y;j++){
        for(int u=1;u<=(y-j+1);u++){
            cout<<"  ";
        }
        for(int k=0;k<=j;k++){
            cout<<ncr(j,k)<<"   ";
        }
        cout<<endl;
    }
}