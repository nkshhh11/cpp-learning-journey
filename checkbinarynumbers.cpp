// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//    int n ;
//    cout<<"enter the nummber : ";
//    cin>>n;

//    bool isbinary = true;
//    for(int i=n ; i>0 ; i=i/10){
//     int digit = i%10;
//     if(digit!=0 && digit!=1){
//         isbinary = false;
//         break;
//     }
//    }
//    if(isbinary)
//    cout<<"number is binary";
// else 
// cout<<"number is not binary";
// }



















#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cout<<"enter the number : ";
  cin>>n;
   bool isbinary = true;
   for(int i=n ; i>0 ; i=i/10){
    int digit= i%10;
    if(digit!=0 && digit!=1){
    isbinary = false;
    break;
    }
   }
   if(isbinary)
   cout<<"number is bianry";
else 
cout<<"number is not binary";
}