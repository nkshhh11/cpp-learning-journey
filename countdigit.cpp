// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number : ";
//     cin>>n;
//     int count = 0;
//     while(n!=0){
//         n=n/10;
//         count++;
//     }
//     cout<<count;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
   int x ;
   cout<<"enter a number : ";
   cin>>x;
   int count = 0;
   while(x!=0){
    x = x/10;
    count++;
   }
   cout<<count;
}