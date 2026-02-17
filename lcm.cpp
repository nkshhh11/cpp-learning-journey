#include <bits/stdc++.h>
using namespace std;

int main() {
 int a , b;
 cout<<"enter the first number : ";
 cin>>a;
 cout<<"enter the second number : ";
 cin>>b;

 int start = (a > b)? a : b;

 for(int i=start ; ; i++)
 if(i%a==0 && i%b==0){
    cout<<"the lcm is "<<i;
    break;
 }
}