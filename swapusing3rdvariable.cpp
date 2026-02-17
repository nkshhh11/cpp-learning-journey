// #include<iostream>
// using namespace std ;
// int main(){
//     int a;
//     int b;
//     int temp;
//     cin>>a;
//     cin>>b;
//     temp = a;
//     a = b;
//     b = temp;
//     cout <<a<<" "<<b;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
   int a ;
   int b;
   int temp;
   cout<<"enter the forst number : ";
   cin>>a;
   cout <<"enter the second number : ";
   cin>>b;
   temp=a ;
   a=b;
   b=temp;
   cout<<"your swapped number is : "<<a<<" "<<b<<endl;
    return 0;
}