// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"enter 1st no. ";
//     cin>>x;
//     int y;
//     cout<<"enter 2nd no. ";
//     cin>>y;
//     cout<<x<<" "<<y<<endl;
//     int temp = x;
//     x =y;
//     y= temp;
//     cout<<x<<" "<<y<<endl;
// }

#include<iostream>
using namespace std;
void swap(int& x,int& y){
    int temp = x;
    x = y;
    y = temp;
}
int main(){
    int x = 21;
    int y = 78;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}