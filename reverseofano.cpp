 #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your no. ";
    cin>>n; 
    int ld= n%10;
    int x=ld;
    n=n/10; 
    while(n>0){ 
        ld=n%10;  
        x= x*10 + ld;
        n=n/10; 
    }
    cout<<x;
} 