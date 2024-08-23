// //divisibility by 5
// #include<iostream>
// using namespace std;
// int main (){
//     int x;
//     cout<<"enter a no.";
//     cin>>x;
//     if(x%5==0){
//         cout<<"yes it is divisible by 5";
//     }
//     else(
//         cout<<"no it is not divisble by 5");
// }


// divisbilty by 5 and 3 both 
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"enter the no. :";
//     cin>>x;
//     if(x%5==0 and x%3==0){
//         cout<<"yes, it's divisible by 3 and 5 both";
//     }
//     else{
//         cout<<"no, it's not divisible by 3 and 5 both";
//     }
// }

//divisibility by 3 or 5 any one
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"enter the no. :";
//     cin>>x;
//     if(x%5==0 or x%3==0){
//         cout<<"yes, it's divisible by 3 or 5";
//     }
//     else{
//         cout<<"no, it's not divisible by 3 or 5 ";
//     }
// }

//divisibility by 3 or 5 but not by 15
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the no. :";
    cin>>x;
    if((x%5==0 or x%3==0) && x%15!=0 ){
        cout<<"yes, it's divisible by 3 or 5 but not by 15";
    }
    else{
        cout<<"no, it's not divisible by 3 or 5 nor by 15  ";
    }
}