#include <bits/stdc++.h>
using namespace std;

int main() {
 int a , b;
 cout<<"enter the first number : ";
 cin>>a;
 cout<<"enter the second number : ";
 cin>>b;
 while(b!=0){
    int remainder=a%b;
    a=b;
    b=remainder;
 }
cout<<"gcd is : "<<a;
return 0;
}