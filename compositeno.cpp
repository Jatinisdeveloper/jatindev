// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the no.";
//     cin>>n;
//     for(int i=2;i<n/2;i++){
//         if(n%i==0){
//             cout<<"composite";
//             break;
//         }
//         else{ cout<<"prime";
//             break;
//         }  
//     } 
// }    

// 2nd method 
#include<iostream>
using namespace std;
int main(){
     int x;
     cout<<"enter your no.";
     cin>>x;
     bool y = true; // true == prime 
     for(int i = 2;i<x/2;i++){
        if(x%i==0)  y = false;
     }
     if(y==true) cout<<"prime";
     else cout<<"composite";  
}