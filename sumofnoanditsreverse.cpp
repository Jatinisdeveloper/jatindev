#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"enter your no. ";
     cin>>n;
     int y= n;
     int x;
     int sum = 0 ;
     int r=0;
     while(n>0){
        x = n%10;
        sum = sum+x;
        r= r*10 + x;
        n = n/10;
     }
     cout<<"the sum of the digits ="<<sum<<endl;
      cout<<"the reverse of the no. is = "<<r<<endl;
      cout<<"the sum of the no. and its reverse"<<y + r;
}