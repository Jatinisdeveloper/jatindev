// #include<iostream>
// using namespace std;
// int main(){
//     while('a'<'b')
//         cout<<"i love my dad";
//} // this is a infinite code because ' ' this denotes the ascii value of the input
  // and ascii value  of a is always less then b

//   #include<iostream>
//   using namespace std;
//   int main(){
//     int i = 10;
//     while(i= 20)
//         cout<<"i love my dad";
//   }
// 

// to calculate no. of digits in a no.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter your no.";
//     cin>>n;
//     int count=0;
//         while(n>0){
//             n = n/10;
//              count++;
//         }
//         cout<<count;
// }

// to get the sum of the digits in a no.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter your no.";
//     cin>>n;
//     int sum =0;
//     int lastdigit=0;
//     while(n>0){
//           lastdigit=n%10;
//           n=n/10;
//           sum= sum + lastdigit;
//     }
//     cout<<sum;
// }

// to find products of the digits in a no.
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter your no.";
  cin>>n;
  int ld;
  int product = 1;
  while(n>0){
      ld = n%10;
      product = product*ld;
      n=n/10;
  }
  cout<<product;
}