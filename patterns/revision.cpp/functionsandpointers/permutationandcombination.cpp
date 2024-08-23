
//combintaion
// #include<iostream>
// using namespace std;
// int fact(int n){
//     int j=1;
//     for(int i=1;i<=n;i++){
//         j *= i;
//     }
//     return j;
// }
// int main(){
//     int x;
//     cout<<"enter a :";
//     cin>>x;
//     int y;
//     cout<<"enter b :";
//     cin>>y;
//     int a= fact(x);
//     int b= fact(y);
//     int c= fact(x-y);
//     cout<<a/(b*c);
// }

// permutation
#include<iostream>
using namespace std;
int fact(int n){
    int j=1;
    for(int i=1;i<=n;i++){
        j *= i;
    }
    return j;
}
int main(){
    int x;
    cout<<"enter a :";
    cin>>x;
    int y;
    cout<<"enter b :";
    cin>>y;
    int a= fact(x);
    int b= fact(x-y);
    cout<<a/b;
}
